class AdditiveAnimator {
public:
    Skeleton baseSkeleton;
    Skeleton additiveSkeleton;
    
    void blendAdditive() {
        for (size_t i = 0; i < baseSkeleton.bones.size(); ++i) {
            baseSkeleton.bones[i].globalTransform += additiveSkeleton.bones[i].globalTransform;
        }
    }
};
