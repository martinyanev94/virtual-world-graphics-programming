void logError(const std::string& message) {
    std::cerr << "Error: " << message << std::endl;
}
if (!scene) {
    logError("Scene import failed: Scene pointer is null.");
    return false;
}
if (scene->mFlags & AI_SCENE_FLAGS_INCOMPLETE) {
    logError("Scene import failed: Scene is incomplete.");
    return false;
}
if (!scene->mRootNode) {
    logError("Scene import failed: No root node found.");
    return false;
}
