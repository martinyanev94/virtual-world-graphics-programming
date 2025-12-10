glm::quat slerp(const glm::quat& start, const glm::quat& end, float alpha) {
    float dot = glm::dot(start, end);
    
    if (dot < 0.0f) {
        // Reverse direction
        end = -end;
        dot = -dot;
    }

    const float THRESHOLD = 0.9995f;
    
    if (dot > THRESHOLD) {
        // Use linear interpolation for close quaternions
        return glm::normalize((1.0f - alpha) * start + alpha * end);
    }

    float theta_0 = acos(dot);
    float theta = theta_0 * alpha;
    
    glm::quat relative = glm::normalize(end - dot * start);
    return start * glm::cos(theta) + relative * glm::sin(theta);
}
