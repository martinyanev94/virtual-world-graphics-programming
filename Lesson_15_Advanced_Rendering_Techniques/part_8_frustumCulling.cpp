bool isObjectInFrustum(const glm::vec3& objectPosition, const Frustum& frustum) {
    for (const auto& plane : frustum.planes) {
        if (plane.getDistance(objectPosition) < 0) {
            return false; // The object is outside of the frustum
        }
    }
    return true; // The object is within the view
}
