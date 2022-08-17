#ifndef tileMap_hpp
#define tileMap_hpp

#include <iostream>
#include <SFML/Graphics.hpp>


struct Tile {
    unsigned int sprite;
	bool is_passable;
		
};

struct Map {
	//Tile tiles[size_x][size_y];

};

class tileMap : public sf::Drawable, public sf::Transformable{
	public:
		//tileMap();
		bool load(const std::string& tileset, sf::Vector2u tileSize, 
				  const int* tiles, unsigned int width, 
				  unsigned int height);
	private:
		virtual void draw(sf::RenderTarget& target, 
						  sf::RenderStates states) const;
		
		sf::VertexArray m_vertices;
		sf::Texture m_tileset;

};
#endif
