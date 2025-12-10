class Skeleton {
public:
    std::vector<Bone> bones;
    Matrix4x4 globalTransform;

    void updateSkeleton(float deltaTime) {
        for (auto& bone : bones) {
            bone.update(deltaTime);
        }
        computeGlobalTransform();
    }

private:
    void computeGlobalTransform() {
        // Compute global transformation for each bone
        for (auto& bone : bones) {
            bone.globalTransform = bone.localTransform * globalTransform;
        }
    }
};
