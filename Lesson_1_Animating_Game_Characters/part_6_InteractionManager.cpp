class InteractionManager {
public:
    void interact(Character &characterOne, Character &characterTwo) {
        if (checkCollision(characterOne, characterTwo.x, characterTwo.y, 1.0f, 1.0f)) {
            // Trigger interaction logic, such as starting a dialogue or a trade
        }
    }
};

// Example usage:
InteractionManager interactionManager;
interactionManager.interact(myCharacter, otherCharacter);
