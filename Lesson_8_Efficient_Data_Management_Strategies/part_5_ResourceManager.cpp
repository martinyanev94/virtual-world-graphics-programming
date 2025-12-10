class ResourceManager {
public:
    std::unordered_map<std::string, Character> characterCache;

    Character& getCharacter(const std::string& characterId) {
        if (characterCache.find(characterId) == characterCache.end()) {
            // Load character if it does not exist in the cache
            characterCache[characterId] = loadCharacter(characterId);
        }

        return characterCache[characterId];
    }

private:
    Character loadCharacter(const std::string& characterId) {
        // Logic to construct a character from files
        std::string meshPath = characterId + ".mesh";
        std::string texturePath = characterId + ".texture";
        std::string animationPath = characterId + ".anim";
        return Character(meshPath, texturePath, animationPath);
    }
};
