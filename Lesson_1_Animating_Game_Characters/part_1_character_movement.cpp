struct Character {
    float x, y; // Character's position
    float speed; // Character's speed

    Character(float startX, float startY, float startSpeed)
        : x(startX), y(startY), speed(startSpeed) {}

    void moveUp() {
        y += speed;
    }

    void moveDown() {
        y -= speed;
    }

    void moveLeft() {
        x -= speed;
    }

    void moveRight() {
        x += speed;
    }
};

// Example usage:
Character myCharacter(0, 0, 0.1f);

// input handling (in your game loop)
myCharacter.moveUp(); // Call this when the up key is pressed
