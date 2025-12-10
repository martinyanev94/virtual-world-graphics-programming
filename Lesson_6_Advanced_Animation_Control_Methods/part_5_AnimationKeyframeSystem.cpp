struct Keyframe {
    float time; // Time in seconds
    glm::vec3 position; // Position of the bone or part
    glm::quat rotation; // Rotation of the bone or part
};

class Animation {
public:
    std::vector<Keyframe> keyframes;
    
    void addKeyframe(float time, const glm::vec3& position, const glm::quat& rotation) {
        keyframes.push_back({time, position, rotation});
    }
    
    Keyframe getInterpolatedKeyframe(float time) {
        // Perform linear interpolation between keyframes
        // This is a simplified version
        if (keyframes.empty()) return {};
        
        Keyframe previous = keyframes.front();
        for (const auto& keyframe : keyframes) {
            if (keyframe.time > time) {
                float t = (time - previous.time) / (keyframe.time - previous.time);
                glm::vec3 interpolatedPosition = glm::mix(previous.position, keyframe.position, t);
                glm::quat interpolatedRotation = glm::slerp(previous.rotation, keyframe.rotation, t);
                return {time, interpolatedPosition, interpolatedRotation};
            }
            previous = keyframe;
        }
        return keyframes.back();
    }
};
