void ApplyMorphs(Model& model, const std::vector<MorphTarget>& morphs, const std::vector<float>& weights) {
    for (size_t i = 0; i < morphs.size(); ++i) {
        for (size_t j = 0; j < model.vertices.size(); ++j) {
            model.vertices[j] += morphs[i].vertexOffsets[j] * weights[i]; // Apply weighted offsets
        }
    }

    // Update vertex buffer with modified vertices to send to the GPU
    model.UpdateVertexBuffer();
}
