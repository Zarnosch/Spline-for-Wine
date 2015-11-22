package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Future;
import lime.app.Preloader;
import lime.app.Promise;
import lime.audio.AudioSource;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Image;
import lime.text.Font;
import lime.utils.ByteArray;
import lime.utils.UInt8Array;
import lime.Assets;

#if sys
import sys.FileSystem;
#end

#if (js && html5)
import lime.net.URLLoader;
import lime.net.URLRequest;
#elseif flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.events.IOErrorEvent;
import flash.events.ProgressEvent;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if (openfl && !flash)
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_arial_ttf);
		
		#end
		
		#if flash
		
		className.set ("assets/data/data-goes-here.txt", __ASSET__assets_data_data_goes_here_txt);
		type.set ("assets/data/data-goes-here.txt", AssetType.TEXT);
		className.set ("assets/images/ammo_clip.ase", __ASSET__assets_images_ammo_clip_ase);
		type.set ("assets/images/ammo_clip.ase", AssetType.BINARY);
		className.set ("assets/images/ammo_clip.png", __ASSET__assets_images_ammo_clip_png);
		type.set ("assets/images/ammo_clip.png", AssetType.IMAGE);
		className.set ("assets/images/explosion.ase", __ASSET__assets_images_explosion_ase);
		type.set ("assets/images/explosion.ase", AssetType.BINARY);
		className.set ("assets/images/explosion.png", __ASSET__assets_images_explosion_png);
		type.set ("assets/images/explosion.png", AssetType.IMAGE);
		className.set ("assets/images/gatling.png", __ASSET__assets_images_gatling_png);
		type.set ("assets/images/gatling.png", AssetType.IMAGE);
		className.set ("assets/images/nazi_sheep.png", __ASSET__assets_images_nazi_sheep_png);
		type.set ("assets/images/nazi_sheep.png", AssetType.IMAGE);
		className.set ("assets/images/nazi_sheep_flying.ase", __ASSET__assets_images_nazi_sheep_flying_ase);
		type.set ("assets/images/nazi_sheep_flying.ase", AssetType.BINARY);
		className.set ("assets/images/nazi_sheep_flying.png", __ASSET__assets_images_nazi_sheep_flying_png);
		type.set ("assets/images/nazi_sheep_flying.png", AssetType.IMAGE);
		className.set ("assets/images/nazi_sheep_map.png", __ASSET__assets_images_nazi_sheep_map_png);
		type.set ("assets/images/nazi_sheep_map.png", AssetType.IMAGE);
		className.set ("assets/images/normal.png", __ASSET__assets_images_normal_png);
		type.set ("assets/images/normal.png", AssetType.IMAGE);
		className.set ("assets/images/rocket.png", __ASSET__assets_images_rocket_png);
		type.set ("assets/images/rocket.png", AssetType.IMAGE);
		className.set ("assets/images/score_board.ase", __ASSET__assets_images_score_board_ase);
		type.set ("assets/images/score_board.ase", AssetType.BINARY);
		className.set ("assets/images/score_board.png", __ASSET__assets_images_score_board_png);
		type.set ("assets/images/score_board.png", AssetType.IMAGE);
		className.set ("assets/images/score_button.png", __ASSET__assets_images_score_button_png);
		type.set ("assets/images/score_button.png", AssetType.IMAGE);
		className.set ("assets/images/sheep.ase", __ASSET__assets_images_sheep_ase);
		type.set ("assets/images/sheep.ase", AssetType.BINARY);
		className.set ("assets/images/sheep.png", __ASSET__assets_images_sheep_png);
		type.set ("assets/images/sheep.png", AssetType.IMAGE);
		className.set ("assets/images/sheep_flying.ase", __ASSET__assets_images_sheep_flying_ase);
		type.set ("assets/images/sheep_flying.ase", AssetType.BINARY);
		className.set ("assets/images/sheep_flying.png", __ASSET__assets_images_sheep_flying_png);
		type.set ("assets/images/sheep_flying.png", AssetType.IMAGE);
		className.set ("assets/images/sheep_head.ase", __ASSET__assets_images_sheep_head_ase);
		type.set ("assets/images/sheep_head.ase", AssetType.BINARY);
		className.set ("assets/images/sheep_head.png", __ASSET__assets_images_sheep_head_png);
		type.set ("assets/images/sheep_head.png", AssetType.IMAGE);
		className.set ("assets/images/sheep_head_dead.ase", __ASSET__assets_images_sheep_head_dead_ase);
		type.set ("assets/images/sheep_head_dead.ase", AssetType.BINARY);
		className.set ("assets/images/sheep_head_dead.png", __ASSET__assets_images_sheep_head_dead_png);
		type.set ("assets/images/sheep_head_dead.png", AssetType.IMAGE);
		className.set ("assets/images/sheep_running.ase", __ASSET__assets_images_sheep_running_ase);
		type.set ("assets/images/sheep_running.ase", AssetType.BINARY);
		className.set ("assets/images/sheep_running.png", __ASSET__assets_images_sheep_running_png);
		type.set ("assets/images/sheep_running.png", AssetType.IMAGE);
		className.set ("assets/images/shots.ase", __ASSET__assets_images_shots_ase);
		type.set ("assets/images/shots.ase", AssetType.BINARY);
		className.set ("assets/images/shots.png", __ASSET__assets_images_shots_png);
		type.set ("assets/images/shots.png", AssetType.IMAGE);
		className.set ("assets/images/soviet_sheep_running.ase", __ASSET__assets_images_soviet_sheep_running_ase);
		type.set ("assets/images/soviet_sheep_running.ase", AssetType.BINARY);
		className.set ("assets/images/tesla.png", __ASSET__assets_images_tesla_png);
		type.set ("assets/images/tesla.png", AssetType.IMAGE);
		className.set ("assets/images/weapons.ase", __ASSET__assets_images_weapons_ase);
		type.set ("assets/images/weapons.ase", AssetType.BINARY);
		className.set ("assets/images/weapons.png", __ASSET__assets_images_weapons_png);
		type.set ("assets/images/weapons.png", AssetType.IMAGE);
		className.set ("assets/music/music-goes-here.txt", __ASSET__assets_music_music_goes_here_txt);
		type.set ("assets/music/music-goes-here.txt", AssetType.TEXT);
		className.set ("assets/sounds/sounds-go-here.txt", __ASSET__assets_sounds_sounds_go_here_txt);
		type.set ("assets/sounds/sounds-go-here.txt", AssetType.TEXT);
		className.set ("assets/sounds/beep.mp3", __ASSET__assets_sounds_beep_mp3);
		type.set ("assets/sounds/beep.mp3", AssetType.MUSIC);
		className.set ("assets/sounds/flixel.mp3", __ASSET__assets_sounds_flixel_mp3);
		type.set ("assets/sounds/flixel.mp3", AssetType.MUSIC);
		className.set ("assets/sounds/beep.ogg", __ASSET__assets_sounds_beep_ogg);
		type.set ("assets/sounds/beep.ogg", AssetType.SOUND);
		className.set ("assets/sounds/flixel.ogg", __ASSET__assets_sounds_flixel_ogg);
		type.set ("assets/sounds/flixel.ogg", AssetType.SOUND);
		className.set ("assets/fonts/nokiafc22.ttf", __ASSET__assets_fonts_nokiafc22_ttf);
		type.set ("assets/fonts/nokiafc22.ttf", AssetType.FONT);
		className.set ("assets/fonts/arial.ttf", __ASSET__assets_fonts_arial_ttf);
		type.set ("assets/fonts/arial.ttf", AssetType.FONT);
		
		
		#elseif html5
		
		var id;
		id = "assets/data/data-goes-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/images/ammo_clip.ase";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/images/ammo_clip.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/explosion.ase";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/images/explosion.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/gatling.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/nazi_sheep.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/nazi_sheep_flying.ase";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/images/nazi_sheep_flying.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/nazi_sheep_map.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/normal.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/rocket.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/score_board.ase";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/images/score_board.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/score_button.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/sheep.ase";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/images/sheep.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/sheep_flying.ase";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/images/sheep_flying.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/sheep_head.ase";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/images/sheep_head.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/sheep_head_dead.ase";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/images/sheep_head_dead.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/sheep_running.ase";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/images/sheep_running.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/shots.ase";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/images/shots.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/soviet_sheep_running.ase";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/images/tesla.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/weapons.ase";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/images/weapons.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/music/music-goes-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/sounds/sounds-go-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/sounds/beep.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/flixel.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/beep.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/flixel.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/fonts/nokiafc22.ttf";
		className.set (id, __ASSET__assets_fonts_nokiafc22_ttf);
		
		type.set (id, AssetType.FONT);
		id = "assets/fonts/arial.ttf";
		className.set (id, __ASSET__assets_fonts_arial_ttf);
		
		type.set (id, AssetType.FONT);
		
		
		var assetsPrefix = null;
		if (ApplicationMain.config != null && Reflect.hasField (ApplicationMain.config, "assetsPrefix")) {
			assetsPrefix = ApplicationMain.config.assetsPrefix;
		}
		if (assetsPrefix != null) {
			for (k in path.keys()) {
				path.set(k, assetsPrefix + path[k]);
			}
		}
		
		#else
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		
		className.set ("assets/data/data-goes-here.txt", __ASSET__assets_data_data_goes_here_txt);
		type.set ("assets/data/data-goes-here.txt", AssetType.TEXT);
		
		className.set ("assets/images/ammo_clip.ase", __ASSET__assets_images_ammo_clip_ase);
		type.set ("assets/images/ammo_clip.ase", AssetType.BINARY);
		
		className.set ("assets/images/ammo_clip.png", __ASSET__assets_images_ammo_clip_png);
		type.set ("assets/images/ammo_clip.png", AssetType.IMAGE);
		
		className.set ("assets/images/explosion.ase", __ASSET__assets_images_explosion_ase);
		type.set ("assets/images/explosion.ase", AssetType.BINARY);
		
		className.set ("assets/images/explosion.png", __ASSET__assets_images_explosion_png);
		type.set ("assets/images/explosion.png", AssetType.IMAGE);
		
		className.set ("assets/images/gatling.png", __ASSET__assets_images_gatling_png);
		type.set ("assets/images/gatling.png", AssetType.IMAGE);
		
		className.set ("assets/images/nazi_sheep.png", __ASSET__assets_images_nazi_sheep_png);
		type.set ("assets/images/nazi_sheep.png", AssetType.IMAGE);
		
		className.set ("assets/images/nazi_sheep_flying.ase", __ASSET__assets_images_nazi_sheep_flying_ase);
		type.set ("assets/images/nazi_sheep_flying.ase", AssetType.BINARY);
		
		className.set ("assets/images/nazi_sheep_flying.png", __ASSET__assets_images_nazi_sheep_flying_png);
		type.set ("assets/images/nazi_sheep_flying.png", AssetType.IMAGE);
		
		className.set ("assets/images/nazi_sheep_map.png", __ASSET__assets_images_nazi_sheep_map_png);
		type.set ("assets/images/nazi_sheep_map.png", AssetType.IMAGE);
		
		className.set ("assets/images/normal.png", __ASSET__assets_images_normal_png);
		type.set ("assets/images/normal.png", AssetType.IMAGE);
		
		className.set ("assets/images/rocket.png", __ASSET__assets_images_rocket_png);
		type.set ("assets/images/rocket.png", AssetType.IMAGE);
		
		className.set ("assets/images/score_board.ase", __ASSET__assets_images_score_board_ase);
		type.set ("assets/images/score_board.ase", AssetType.BINARY);
		
		className.set ("assets/images/score_board.png", __ASSET__assets_images_score_board_png);
		type.set ("assets/images/score_board.png", AssetType.IMAGE);
		
		className.set ("assets/images/score_button.png", __ASSET__assets_images_score_button_png);
		type.set ("assets/images/score_button.png", AssetType.IMAGE);
		
		className.set ("assets/images/sheep.ase", __ASSET__assets_images_sheep_ase);
		type.set ("assets/images/sheep.ase", AssetType.BINARY);
		
		className.set ("assets/images/sheep.png", __ASSET__assets_images_sheep_png);
		type.set ("assets/images/sheep.png", AssetType.IMAGE);
		
		className.set ("assets/images/sheep_flying.ase", __ASSET__assets_images_sheep_flying_ase);
		type.set ("assets/images/sheep_flying.ase", AssetType.BINARY);
		
		className.set ("assets/images/sheep_flying.png", __ASSET__assets_images_sheep_flying_png);
		type.set ("assets/images/sheep_flying.png", AssetType.IMAGE);
		
		className.set ("assets/images/sheep_head.ase", __ASSET__assets_images_sheep_head_ase);
		type.set ("assets/images/sheep_head.ase", AssetType.BINARY);
		
		className.set ("assets/images/sheep_head.png", __ASSET__assets_images_sheep_head_png);
		type.set ("assets/images/sheep_head.png", AssetType.IMAGE);
		
		className.set ("assets/images/sheep_head_dead.ase", __ASSET__assets_images_sheep_head_dead_ase);
		type.set ("assets/images/sheep_head_dead.ase", AssetType.BINARY);
		
		className.set ("assets/images/sheep_head_dead.png", __ASSET__assets_images_sheep_head_dead_png);
		type.set ("assets/images/sheep_head_dead.png", AssetType.IMAGE);
		
		className.set ("assets/images/sheep_running.ase", __ASSET__assets_images_sheep_running_ase);
		type.set ("assets/images/sheep_running.ase", AssetType.BINARY);
		
		className.set ("assets/images/sheep_running.png", __ASSET__assets_images_sheep_running_png);
		type.set ("assets/images/sheep_running.png", AssetType.IMAGE);
		
		className.set ("assets/images/shots.ase", __ASSET__assets_images_shots_ase);
		type.set ("assets/images/shots.ase", AssetType.BINARY);
		
		className.set ("assets/images/shots.png", __ASSET__assets_images_shots_png);
		type.set ("assets/images/shots.png", AssetType.IMAGE);
		
		className.set ("assets/images/soviet_sheep_running.ase", __ASSET__assets_images_soviet_sheep_running_ase);
		type.set ("assets/images/soviet_sheep_running.ase", AssetType.BINARY);
		
		className.set ("assets/images/tesla.png", __ASSET__assets_images_tesla_png);
		type.set ("assets/images/tesla.png", AssetType.IMAGE);
		
		className.set ("assets/images/weapons.ase", __ASSET__assets_images_weapons_ase);
		type.set ("assets/images/weapons.ase", AssetType.BINARY);
		
		className.set ("assets/images/weapons.png", __ASSET__assets_images_weapons_png);
		type.set ("assets/images/weapons.png", AssetType.IMAGE);
		
		className.set ("assets/music/music-goes-here.txt", __ASSET__assets_music_music_goes_here_txt);
		type.set ("assets/music/music-goes-here.txt", AssetType.TEXT);
		
		className.set ("assets/sounds/sounds-go-here.txt", __ASSET__assets_sounds_sounds_go_here_txt);
		type.set ("assets/sounds/sounds-go-here.txt", AssetType.TEXT);
		
		className.set ("assets/sounds/beep.mp3", __ASSET__assets_sounds_beep_mp3);
		type.set ("assets/sounds/beep.mp3", AssetType.MUSIC);
		
		className.set ("assets/sounds/flixel.mp3", __ASSET__assets_sounds_flixel_mp3);
		type.set ("assets/sounds/flixel.mp3", AssetType.MUSIC);
		
		className.set ("assets/sounds/beep.ogg", __ASSET__assets_sounds_beep_ogg);
		type.set ("assets/sounds/beep.ogg", AssetType.SOUND);
		
		className.set ("assets/sounds/flixel.ogg", __ASSET__assets_sounds_flixel_ogg);
		type.set ("assets/sounds/flixel.ogg", AssetType.SOUND);
		
		className.set ("assets/fonts/nokiafc22.ttf", __ASSET__assets_fonts_nokiafc22_ttf);
		type.set ("assets/fonts/nokiafc22.ttf", AssetType.FONT);
		
		className.set ("assets/fonts/arial.ttf", __ASSET__assets_fonts_arial_ttf);
		type.set ("assets/fonts/arial.ttf", AssetType.FONT);
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						onChange.dispatch ();
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if (requestedType == BINARY && (assetType == BINARY || assetType == TEXT || assetType == IMAGE)) {
				
				return true;
				
			} else if (requestedType == null || path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return AudioBuffer.fromBytes (cast (Type.createInstance (className.get (id), []), ByteArray));
		else return AudioBuffer.fromFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if flash
		
		switch (type.get (id)) {
			
			case TEXT, BINARY:
				
				return cast (Type.createInstance (className.get (id), []), ByteArray);
			
			case IMAGE:
				
				var bitmapData = cast (Type.createInstance (className.get (id), []), BitmapData);
				return bitmapData.getPixels (bitmapData.rect);
			
			default:
				
				return null;
			
		}
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);
		
		#elseif html5
		
		var bytes:ByteArray = null;
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var data = loader.data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if flash
		
		var src = Type.createInstance (className.get (id), []);
		
		var font = new Font (src.fontName);
		font.src = src;
		return font;
		
		#elseif html5
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return Font.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Image);
			
		} else {
			
			return Image.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var bytes:ByteArray = null;
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var data = loader.data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		//if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		//}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String):Future<AudioBuffer> {
		
		var promise = new Promise<AudioBuffer> ();
		
		#if (flash)
		
		if (path.exists (id)) {
			
			var soundLoader = new Sound ();
			soundLoader.addEventListener (Event.COMPLETE, function (event) {
				
				var audioBuffer:AudioBuffer = new AudioBuffer();
				audioBuffer.src = event.currentTarget;
				promise.complete (audioBuffer);
				
			});
			soundLoader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			soundLoader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			soundLoader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getAudioBuffer (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<AudioBuffer> (function () return getAudioBuffer (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadBytes (id:String):Future<ByteArray> {
		
		var promise = new Promise<ByteArray> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				promise.complete (bytes);
				
			});
			loader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.dataFormat = BINARY;
			loader.onComplete.add (function (_):Void {
				
				promise.complete (loader.data);
				
			});
			loader.onProgress.add (function (_, loaded, total) {
				
				if (total == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (loaded / total);
					
				}
				
			});
			loader.onIOError.add (function (_, e) {
				
				promise.error (e);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<ByteArray> (function () return getBytes (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadImage (id:String):Future<Image> {
		
		var promise = new Promise<Image> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				promise.complete (Image.fromBitmapData (bitmapData));
				
			});
			loader.contentLoaderInfo.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.contentLoaderInfo.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var image = new js.html.Image ();
			image.onload = function (_):Void {
				
				promise.complete (Image.fromImageElement (image));
				
			}
			image.onerror = promise.error;
			image.src = path.get (id);
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Image> (function () return getImage (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = ByteArray.readFile ("../Resources/manifest");
			#elseif (ios || tvos)
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								#if (ios || tvos)
								path.set (asset.id, "assets/" + asset.path);
								#else
								path.set (asset.id, asset.path);
								#end
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	public override function loadText (id:String):Future<String> {
		
		var promise = new Promise<String> ();
		
		#if html5
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.onComplete.add (function (_):Void {
				
				promise.complete (loader.data);
				
			});
			loader.onProgress.add (function (_, loaded, total) {
				
				if (total == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (loaded / total);
					
				}
				
			});
			loader.onIOError.add (function (_, msg) promise.error (msg));
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getText (id));
			
		}
		
		#else
		
		promise.completeWith (loadBytes (id).then (function (bytes) {
			
			return new Future<String> (function () {
				
				if (bytes == null) {
					
					return null;
					
				} else {
					
					return bytes.readUTFBytes (bytes.length);
					
				}
				
			});
			
		}));
		
		#end
		
		return promise.future;
		
	}
	
	
}


#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__assets_data_data_goes_here_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_ammo_clip_ase extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_ammo_clip_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_explosion_ase extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_explosion_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_gatling_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_nazi_sheep_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_nazi_sheep_flying_ase extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_nazi_sheep_flying_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_nazi_sheep_map_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_normal_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_rocket_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_score_board_ase extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_score_board_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_score_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_sheep_ase extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_sheep_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_sheep_flying_ase extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_sheep_flying_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_sheep_head_ase extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_sheep_head_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_sheep_head_dead_ase extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_sheep_head_dead_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_sheep_running_ase extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_sheep_running_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_shots_ase extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_shots_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_soviet_sheep_running_ase extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_tesla_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_ase extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_music_music_goes_here_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_beep_mp3 extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_flixel_mp3 extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_beep_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_flixel_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_fonts_nokiafc22_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_fonts_arial_ttf extends null { }


#elseif html5






































@:keep #if display private #end class __ASSET__assets_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { super (); name = "Nokia Cellphone FC Small"; } } 
@:keep #if display private #end class __ASSET__assets_fonts_arial_ttf extends lime.text.Font { public function new () { super (); name = "Arial"; } } 


#else



#if (windows || mac || linux || cpp)


@:file("assets/data/data-goes-here.txt") #if display private #end class __ASSET__assets_data_data_goes_here_txt extends lime.utils.ByteArray {}
@:file("assets/images/ammo_clip.ase") #if display private #end class __ASSET__assets_images_ammo_clip_ase extends lime.utils.ByteArray {}
@:image("assets/images/ammo_clip.png") #if display private #end class __ASSET__assets_images_ammo_clip_png extends lime.graphics.Image {}
@:file("assets/images/explosion.ase") #if display private #end class __ASSET__assets_images_explosion_ase extends lime.utils.ByteArray {}
@:image("assets/images/explosion.png") #if display private #end class __ASSET__assets_images_explosion_png extends lime.graphics.Image {}
@:image("assets/images/gatling.png") #if display private #end class __ASSET__assets_images_gatling_png extends lime.graphics.Image {}
@:image("assets/images/nazi_sheep.png") #if display private #end class __ASSET__assets_images_nazi_sheep_png extends lime.graphics.Image {}
@:file("assets/images/nazi_sheep_flying.ase") #if display private #end class __ASSET__assets_images_nazi_sheep_flying_ase extends lime.utils.ByteArray {}
@:image("assets/images/nazi_sheep_flying.png") #if display private #end class __ASSET__assets_images_nazi_sheep_flying_png extends lime.graphics.Image {}
@:image("assets/images/nazi_sheep_map.png") #if display private #end class __ASSET__assets_images_nazi_sheep_map_png extends lime.graphics.Image {}
@:image("assets/images/normal.png") #if display private #end class __ASSET__assets_images_normal_png extends lime.graphics.Image {}
@:image("assets/images/rocket.png") #if display private #end class __ASSET__assets_images_rocket_png extends lime.graphics.Image {}
@:file("assets/images/score_board.ase") #if display private #end class __ASSET__assets_images_score_board_ase extends lime.utils.ByteArray {}
@:image("assets/images/score_board.png") #if display private #end class __ASSET__assets_images_score_board_png extends lime.graphics.Image {}
@:image("assets/images/score_button.png") #if display private #end class __ASSET__assets_images_score_button_png extends lime.graphics.Image {}
@:file("assets/images/sheep.ase") #if display private #end class __ASSET__assets_images_sheep_ase extends lime.utils.ByteArray {}
@:image("assets/images/sheep.png") #if display private #end class __ASSET__assets_images_sheep_png extends lime.graphics.Image {}
@:file("assets/images/sheep_flying.ase") #if display private #end class __ASSET__assets_images_sheep_flying_ase extends lime.utils.ByteArray {}
@:image("assets/images/sheep_flying.png") #if display private #end class __ASSET__assets_images_sheep_flying_png extends lime.graphics.Image {}
@:file("assets/images/sheep_head.ase") #if display private #end class __ASSET__assets_images_sheep_head_ase extends lime.utils.ByteArray {}
@:image("assets/images/sheep_head.png") #if display private #end class __ASSET__assets_images_sheep_head_png extends lime.graphics.Image {}
@:file("assets/images/sheep_head_dead.ase") #if display private #end class __ASSET__assets_images_sheep_head_dead_ase extends lime.utils.ByteArray {}
@:image("assets/images/sheep_head_dead.png") #if display private #end class __ASSET__assets_images_sheep_head_dead_png extends lime.graphics.Image {}
@:file("assets/images/sheep_running.ase") #if display private #end class __ASSET__assets_images_sheep_running_ase extends lime.utils.ByteArray {}
@:image("assets/images/sheep_running.png") #if display private #end class __ASSET__assets_images_sheep_running_png extends lime.graphics.Image {}
@:file("assets/images/shots.ase") #if display private #end class __ASSET__assets_images_shots_ase extends lime.utils.ByteArray {}
@:image("assets/images/shots.png") #if display private #end class __ASSET__assets_images_shots_png extends lime.graphics.Image {}
@:file("assets/images/soviet_sheep_running.ase") #if display private #end class __ASSET__assets_images_soviet_sheep_running_ase extends lime.utils.ByteArray {}
@:image("assets/images/tesla.png") #if display private #end class __ASSET__assets_images_tesla_png extends lime.graphics.Image {}
@:file("assets/images/weapons.ase") #if display private #end class __ASSET__assets_images_weapons_ase extends lime.utils.ByteArray {}
@:image("assets/images/weapons.png") #if display private #end class __ASSET__assets_images_weapons_png extends lime.graphics.Image {}
@:file("assets/music/music-goes-here.txt") #if display private #end class __ASSET__assets_music_music_goes_here_txt extends lime.utils.ByteArray {}
@:file("assets/sounds/sounds-go-here.txt") #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends lime.utils.ByteArray {}
@:file("C:/HaxeToolkit/haxe/lib/flixel/3,3,11/assets/sounds/beep.mp3") #if display private #end class __ASSET__assets_sounds_beep_mp3 extends lime.utils.ByteArray {}
@:file("C:/HaxeToolkit/haxe/lib/flixel/3,3,11/assets/sounds/flixel.mp3") #if display private #end class __ASSET__assets_sounds_flixel_mp3 extends lime.utils.ByteArray {}
@:file("C:/HaxeToolkit/haxe/lib/flixel/3,3,11/assets/sounds/beep.ogg") #if display private #end class __ASSET__assets_sounds_beep_ogg extends lime.utils.ByteArray {}
@:file("C:/HaxeToolkit/haxe/lib/flixel/3,3,11/assets/sounds/flixel.ogg") #if display private #end class __ASSET__assets_sounds_flixel_ogg extends lime.utils.ByteArray {}
@:font("C:/HaxeToolkit/haxe/lib/flixel/3,3,11/assets/fonts/nokiafc22.ttf") #if display private #end class __ASSET__assets_fonts_nokiafc22_ttf extends lime.text.Font {}
@:font("C:/HaxeToolkit/haxe/lib/flixel/3,3,11/assets/fonts/arial.ttf") #if display private #end class __ASSET__assets_fonts_arial_ttf extends lime.text.Font {}



#end
#end

#if (openfl && !flash)
@:keep #if display private #end class __ASSET__OPENFL__assets_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__assets_fonts_nokiafc22_ttf (); src = font.src; name = font.name; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__assets_fonts_arial_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__assets_fonts_arial_ttf (); src = font.src; name = font.name; super (); }}

#end

#end