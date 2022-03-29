#include "fontfactory.h"

FontFactory::FontFactory(){

}

FontFactory::~FontFactory(){

}

Font* FontFactory::getFont(const string& key){
    map<std::string, Font*>::iterator item = fontpool.find(key);

    if(item != footpool.end()){
        return fontpool[key];
    }else{
        Font* font = new Font(key);
        fontpool[key] = font;
        return fontpool[key];
    }
}


void FontFactory::clear(){
    fontpool.clear();
}