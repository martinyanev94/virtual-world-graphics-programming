void processInput(Character& character, const Input& input) {
    if (input.isKeyPressed(KEY_W)) {
        character.velocity.z += SPEED; // Move forward
    }
    if (input.isKeyPressed(KEY_S)) {
        character.velocity.z -= SPEED; // Move backward
    }
    if (input.isKeyPressed(KEY_A)) {
        character.velocity.x -= SPEED; // Move left
    }
    if (input.isKeyPressed(KEY_D)) {
        character.velocity.x += SPEED; // Move right
    }
}
