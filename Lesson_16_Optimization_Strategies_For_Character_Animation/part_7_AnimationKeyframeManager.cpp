struct Keyframe {
    float time;
    glm::vec3 position;
    glm::quat rotation;
};

class Animation {
public:
    std::vector<Keyframe> keyframes;

    void addKeyframe(float time, const glm::vec3& position, const glm::quat& rotation) {
        keyframes.push_back({ time, position, rotation });
    }

    void interpolate(float currentTime) {
        // Basic linear interpolation example between keyframes
        for (size_t i = 0; i < keyframes.size() - 1; ++i) {
            if (currentTime >= keyframes[i].time && currentTime <= keyframes[i + 1].time) {
                float t = (currentTime - keyframes[i].time) / (keyframes[i + 1].time - keyframes[i].time);
                glm::vec3 newPosition = glm::mix(keyframes[i].position, keyframes[i + 1].position, t);
                glm::quat newRotation = glm::slerp(keyframes[i].rotation, keyframes[i + 1].rotation, t);
                
                // Apply the interpolated position and rotation
                // ... (update transformation matrix)
                break;
            }
        }
    }
};
