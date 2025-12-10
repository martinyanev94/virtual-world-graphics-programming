layout(location = 0) in vec3 instancePosition;
layout(location = 1) in vec3 instanceRotation;
layout(location = 2) in vec3 instanceScale;

void main() {
    // Transform vertex position
    gl_Position = projection * view * model * vec4(instancePosition, 1.0);
}
