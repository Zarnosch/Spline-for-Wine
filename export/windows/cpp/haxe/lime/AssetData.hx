package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
			type.set ("assets/data/data-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/fonts/arial.ttf", "assets/fonts/arial.ttf");
			type.set ("assets/fonts/arial.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/fonts/nokiafc22.ttf", "assets/fonts/nokiafc22.ttf");
			type.set ("assets/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/images/ammo_clip.ase", "assets/images/ammo_clip.ase");
			type.set ("assets/images/ammo_clip.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/ammo_clip.png", "assets/images/ammo_clip.png");
			type.set ("assets/images/ammo_clip.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/explosion.ase", "assets/images/explosion.ase");
			type.set ("assets/images/explosion.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/explosion.png", "assets/images/explosion.png");
			type.set ("assets/images/explosion.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/gatling.png", "assets/images/gatling.png");
			type.set ("assets/images/gatling.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/nazi_sheep.png", "assets/images/nazi_sheep.png");
			type.set ("assets/images/nazi_sheep.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/nazi_sheep_flying.ase", "assets/images/nazi_sheep_flying.ase");
			type.set ("assets/images/nazi_sheep_flying.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/nazi_sheep_flying.png", "assets/images/nazi_sheep_flying.png");
			type.set ("assets/images/nazi_sheep_flying.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/nazi_sheep_map.png", "assets/images/nazi_sheep_map.png");
			type.set ("assets/images/nazi_sheep_map.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/normal.png", "assets/images/normal.png");
			type.set ("assets/images/normal.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/rocket.png", "assets/images/rocket.png");
			type.set ("assets/images/rocket.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/score_board.ase", "assets/images/score_board.ase");
			type.set ("assets/images/score_board.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/score_board.png", "assets/images/score_board.png");
			type.set ("assets/images/score_board.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/score_button.png", "assets/images/score_button.png");
			type.set ("assets/images/score_button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/sheep.ase", "assets/images/sheep.ase");
			type.set ("assets/images/sheep.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/sheep.png", "assets/images/sheep.png");
			type.set ("assets/images/sheep.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/sheep_flying.ase", "assets/images/sheep_flying.ase");
			type.set ("assets/images/sheep_flying.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/sheep_flying.png", "assets/images/sheep_flying.png");
			type.set ("assets/images/sheep_flying.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/sheep_head.ase", "assets/images/sheep_head.ase");
			type.set ("assets/images/sheep_head.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/sheep_head.png", "assets/images/sheep_head.png");
			type.set ("assets/images/sheep_head.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/sheep_head_dead.ase", "assets/images/sheep_head_dead.ase");
			type.set ("assets/images/sheep_head_dead.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/sheep_head_dead.png", "assets/images/sheep_head_dead.png");
			type.set ("assets/images/sheep_head_dead.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/sheep_running.ase", "assets/images/sheep_running.ase");
			type.set ("assets/images/sheep_running.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/sheep_running.png", "assets/images/sheep_running.png");
			type.set ("assets/images/sheep_running.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/shots.ase", "assets/images/shots.ase");
			type.set ("assets/images/shots.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/shots.png", "assets/images/shots.png");
			type.set ("assets/images/shots.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/soviet_sheep_running.ase", "assets/images/soviet_sheep_running.ase");
			type.set ("assets/images/soviet_sheep_running.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/tesla.png", "assets/images/tesla.png");
			type.set ("assets/images/tesla.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/weapons.ase", "assets/images/weapons.ase");
			type.set ("assets/images/weapons.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/weapons.png", "assets/images/weapons.png");
			type.set ("assets/images/weapons.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/beep.mp3", "assets/sounds/beep.mp3");
			type.set ("assets/sounds/beep.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/sounds/beep.ogg", "assets/sounds/beep.ogg");
			type.set ("assets/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/flixel.mp3", "assets/sounds/flixel.mp3");
			type.set ("assets/sounds/flixel.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/sounds/flixel.ogg", "assets/sounds/flixel.ogg");
			type.set ("assets/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/beep.ogg", "assets/sounds/beep.ogg");
			type.set ("assets/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/flixel.ogg", "assets/sounds/flixel.ogg");
			type.set ("assets/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/fonts/nokiafc22.ttf", "assets/fonts/nokiafc22.ttf");
			type.set ("assets/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/fonts/arial.ttf", "assets/fonts/arial.ttf");
			type.set ("assets/fonts/arial.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
