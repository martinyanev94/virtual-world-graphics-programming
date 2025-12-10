void renderModel(const ModelAndInstanceData& modelData) {
    for (const auto& state : modelData.animationStates) {
        if (state.isActive) {
            // Render the current frame of the active animation
            renderAnimationFrame(state.animationData, state.currentTime);
            break;
        }
    }
}
