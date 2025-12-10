float t = 0.0f; // Initialization of the interpolation factor
float speed = 0.01f; // Speed of the morph animation

while (!glfwWindowShouldClose(window)) {
    glClear(GL_COLOR_BUFFER_BIT);

    // Update the interpolation factor
    t += speed;
    if (t > 1.0f) {
        t = 0.0f; // Reset to loop the morphing effect
    }

    // Interpolate between the two shapes
    std::vector<glm::vec3> morphedVertices = interpolate(triangleVertices, squareVertices, t);

    // Render the morphed shape using morphedVertices
    renderShape(morphedVertices);

    glfwSwapBuffers(window);
    glfwPollEvents();
}
