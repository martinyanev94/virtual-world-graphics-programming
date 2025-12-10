float easeInOutCubic(float t) {
    return (t < 0.5) ? 4 * t * t * t : 1 - pow(-2 * t + 2, 3) / 2;
}
std::vector<glm::vec3> interpolateEased(const std::vector<glm::vec3>& startVertices,
                                         const std::vector<glm::vec3>& endVertices,
                                         float t) {
    float easedT = easeInOutCubic(t);
    return interpolate(startVertices, endVertices, easedT);
}
