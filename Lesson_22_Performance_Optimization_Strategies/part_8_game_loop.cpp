void gameLoop() {
    std::thread physicsThread(runPhysicsUpdates); // Run physics in a separate thread
    
    renderCharacters(characters); // Render while physics updates in parallel

    physicsThread.join(); // Wait for the physics thread to finish
}
