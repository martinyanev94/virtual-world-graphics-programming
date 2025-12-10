void setAnimationState(ModelAndInstanceData& modelData, unsigned int newStateId) {
    for (auto& state : modelData.animationStates) {
        state.isActive = (state.animationData->id == newStateId);
    }
}
