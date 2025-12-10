struct AdditiveAnimation {
    glm::vec3 positionOffset;
    glm::vec3 rotationOffset;

    void apply(Character& character) {
        character.position += positionOffset;
        character.rotation += rotationOffset;
    }
};
