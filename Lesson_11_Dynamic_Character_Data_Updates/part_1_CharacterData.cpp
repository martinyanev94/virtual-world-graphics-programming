struct CharacterData {
    glm::vec3 position;         // Character's position in 3D space
    glm::quat rotation;         // Character's rotation
    AnimationState animState;   // Current animation state

    CharacterData() 
        : position(0.0f), rotation(glm::quat::identity()), animState(AnimationState::Idle) {}
};
