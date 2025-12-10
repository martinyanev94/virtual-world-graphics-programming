glm::vec3 blendPositions(glm::vec3 start, glm::vec3 end, float alpha) {
    return (1.0f - alpha) * start + alpha * end;
}
