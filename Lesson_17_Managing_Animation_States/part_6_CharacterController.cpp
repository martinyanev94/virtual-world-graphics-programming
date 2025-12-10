class CharacterController {
public:
    ModelAndInstanceData playerModel;

    void handleInput(Input& input) {
        if (input.isKeyPressed(Key::W)) {
            setAnimationState(playerModel, RUN_ANIMATION_ID);
        } else {
            setAnimationState(playerModel, IDLE_ANIMATION_ID);
        }
    }

    void update(float deltaTime) {
        playerModel.updateAnimationState(deltaTime);
    }

    void render() {
        renderModel(playerModel);
    }
};
