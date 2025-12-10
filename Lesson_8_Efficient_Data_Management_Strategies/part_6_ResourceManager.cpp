class ResourceManager {
    // ... (previous code)

public:
    void unloadCharacter(const std::string& characterId) {
        if (characterCache.find(characterId) != characterCache.end()) {
            // Unload and remove the character from the cache
            characterCache.erase(characterId);
            // Additional cleanup tasks can be performed here
        }
    }
};
