class MorphTarget {
public:
    Mesh targetMesh; // The target mesh for this morph
    float influence; // The weight of the morphing effect

    void blend(Mesh& originalMesh) {
        // Interpolates between the original and target mesh vertices
        for (size_t i = 0; i < originalMesh.vertices.size(); i++) {
            originalMesh.vertices[i] = glm::mix(originalMesh.vertices[i], 
                                                  targetMesh.vertices[i], 
                                                  influence);
        }
    }
};

class Character {
public:
    std::vector<MorphTarget> morphTargets;

    void updateMorphs() {
        for (auto& morph : morphTargets) {
            morph.blend(characterMesh);
        }
    }
};
