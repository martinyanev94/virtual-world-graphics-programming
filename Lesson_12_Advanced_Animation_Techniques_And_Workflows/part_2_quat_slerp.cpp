glm::quat Slerp(const glm::quat& q1, const glm::quat& q2, float t) {
    float dot = glm::dot(q1, q2);

    // If the dot product is negative, the quaternions are more than 180 degrees apart,
    // so we negate one quaternion to take the shorter path.
    if (dot < 0.0f) {
        q2 = -q2;
        dot = -dot;
    }

    if (dot > 0.9995f) { // Very close case
        return glm::normalize((1.0f - t) * q1 + t * q2); // Linear interpolation
    }

    float theta_0 = acos(dot); // Angle between the quaternions
    float theta = theta_0 * t; // Angle for interpolation

    glm::quat q2_minus_q1 = q2 - q1 * dot;
    q2_minus_q1 = glm::normalize(q2_minus_q1); // Normalize

    return glm::cos(theta) * q1 + glm::sin(theta) * q2_minus_q1; // Interpolated quaternion
}
