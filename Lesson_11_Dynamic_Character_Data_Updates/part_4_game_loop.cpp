while (!windowShouldClose) {
    // Process input
    ProcessInput();

    // Update character logic (position, animation state, etc.)
    character.position += glm::vec3(0.0f, -9.8f * deltaTime, 0.0f); // Gravity effect
    character.animState = GetAnimationState(); // Logic to determine current animation

    // Update the character data in the GPU
    UpdateCharacterData(character, characterShader);

    // Render the scene
    RenderScene();

    // Swap buffers and poll for events
    glfwSwapBuffers(window);
    glfwPollEvents();
}
