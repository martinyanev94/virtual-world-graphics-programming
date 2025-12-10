class CompressedTextureLoader {
public:
    static Texture loadCompressedTexture(const std::string& path) {
        // Load the compressed texture image data
        CompressedImageData compressedData = loadFromFile(path);
        
        // Decompress the data into a usable texture format
        Texture texture = decompressImage(compressedData);
        
        return texture;
    }
};
