class CharacterOutfit {
public:
    std::string outfitName;

    CharacterOutfit(std::string name) : outfitName(name) {}

    void changeOutfit(std::string newOutfit) {
        outfitName = newOutfit;
        // Load new outfit texture or model here
    }
};

// Example usage:
CharacterOutfit myOutfit("Basic Outfit");
myOutfit.changeOutfit("Warrior Armor");
