class VertexPool {
public:
    VertexPool(size_t size) {
        pool.resize(size);
        freeIndices.resize(size);
        for (size_t i = 0; i < size; ++i) {
            freeIndices[i] = i;
        }
    }

    int allocate() {
        if (freeIndices.empty()) return -1; // Pool is full
        int index = freeIndices.back();
        freeIndices.pop_back();
        return index;
    }

    void deallocate(int index) {
        freeIndices.push_back(index);
    }

    Vertex& getVertex(int index) {
        return pool[index];
    }

private:
    std::vector<Vertex> pool;
    std::vector<int> freeIndices;
};
