bool checkCollision(Character &character, float targetX, float targetY, float targetWidth, float targetHeight) {
    // Simple AABB collision detection
    return (character.x < targetX + targetWidth &&
            character.x + 0.5 > targetX &&
            character.y < targetY + targetHeight &&
            character.y + 0.5 > targetY);
}

// Usage:
if (checkCollision(myCharacter, otherCharacter.x, otherCharacter.y, otherCharacterWidth, otherCharacterHeight)) {
    // Handle collision, such as stopping movement
}
