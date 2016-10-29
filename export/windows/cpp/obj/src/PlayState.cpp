#include <hxcpp.h>

#ifndef INCLUDED_Bullet
#include <Bullet.h>
#endif
#ifndef INCLUDED_Enemy
#include <Enemy.h>
#endif
#ifndef INCLUDED_Explosion
#include <Explosion.h>
#endif
#ifndef INCLUDED_GameOver
#include <GameOver.h>
#endif
#ifndef INCLUDED_MapGen
#include <MapGen.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Sheep
#include <Sheep.h>
#endif
#ifndef INCLUDED_Weapon
#include <Weapon.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",20,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(47)
	this->kills = (int)0;
	HX_STACK_LINE(45)
	this->score = (int)0;
	HX_STACK_LINE(43)
	this->ammoClipMaxY = ((Float)144);
	HX_STACK_LINE(32)
	this->w = (int)1;
	HX_STACK_LINE(30)
	this->enemieShots = ::flixel::group::FlxTypedGroup_obj::__new(null());
	HX_STACK_LINE(29)
	this->enemies = ::flixel::group::FlxTypedGroup_obj::__new(null());
	HX_STACK_LINE(20)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	super::__construct(tmp);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",50,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		tmp->bgColor = (int)-8355712;
		HX_STACK_LINE(52)
		this->super::create();
		HX_STACK_LINE(55)
		::MapGen tmp1 = ::MapGen_obj::__new((int)1000,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		this->map = tmp1;
		HX_STACK_LINE(56)
		::MapGen tmp2 = this->map;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		this->enemies = tmp2->enemies;
		HX_STACK_LINE(57)
		::MapGen tmp3 = this->map;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		this->enemieShots = tmp3->enemieShots;
		HX_STACK_LINE(58)
		::MapGen tmp4 = this->map;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		this->add(tmp4);
		HX_STACK_LINE(60)
		::MapGen tmp5 = this->map;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		::flixel::group::FlxTypedGroup tmp6 = tmp5->collGrounds;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(60)
		this->add(tmp6);
		HX_STACK_LINE(61)
		::MapGen tmp7 = this->map;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(61)
		::flixel::group::FlxTypedGroup tmp8 = tmp7->visGrounds;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(61)
		this->add(tmp8);
		HX_STACK_LINE(62)
		::MapGen tmp9 = this->map;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(62)
		::flixel::group::FlxTypedGroup tmp10 = tmp9->debugFus;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(62)
		this->add(tmp10);
		HX_STACK_LINE(64)
		::MapGen tmp11 = this->map;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(64)
		::flixel::group::FlxTypedGroupIterator tmp12 = ::flixel::group::FlxTypedGroupIterator_obj::__new(tmp11->visGrounds->members,null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(64)
		for(::cpp::FastIterator_obj< ::flixel::FlxSprite > *__it = ::cpp::CreateFastIterator< ::flixel::FlxSprite >(tmp12);  __it->hasNext(); ){
			::flixel::FlxSprite val = __it->next();
			{
				HX_STACK_LINE(66)
				::flixel::FlxSprite tmp13 = val;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(66)
				this->add(tmp13);
			}
;
		}
		HX_STACK_LINE(70)
		::Sheep tmp13 = ::Sheep_obj::__new((int)0,(int)900);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(70)
		this->sheep = tmp13;
		HX_STACK_LINE(71)
		::Sheep tmp14 = this->sheep;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(71)
		this->add(tmp14);
		HX_STACK_LINE(74)
		::Weapon tmp15 = ::Weapon_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(74)
		this->weapons = tmp15;
		HX_STACK_LINE(75)
		::Weapon tmp16 = this->weapons;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(75)
		this->add(tmp16);
		HX_STACK_LINE(76)
		::Weapon tmp17 = this->weapons;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(76)
		::flixel::group::FlxTypedGroup tmp18 = tmp17->bullets;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(76)
		this->add(tmp18);
		HX_STACK_LINE(78)
		::flixel::group::FlxTypedGroup tmp19 = this->enemies;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(78)
		this->add(tmp19);
		HX_STACK_LINE(79)
		::flixel::group::FlxTypedGroup tmp20 = this->enemieShots;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(79)
		this->add(tmp20);
		HX_STACK_LINE(80)
		::Sheep tmp21 = this->sheep;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(80)
		::MapGen tmp22 = this->map;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(80)
		tmp22->sheep = tmp21;
		HX_STACK_LINE(82)
		::flixel::FlxSprite tmp23 = ::flixel::FlxSprite_obj::__new((int)2,(int)2,HX_HCSTRING("assets/images/sheep_head.png","\xaa","\x0c","\xd1","\xf4"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(82)
		this->live1 = tmp23;
		HX_STACK_LINE(83)
		::flixel::FlxSprite tmp24 = this->live1;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(83)
		tmp24->scrollFactor->set((int)0,(int)0);
		HX_STACK_LINE(84)
		::flixel::FlxSprite tmp25 = this->live1;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(84)
		this->add(tmp25);
		HX_STACK_LINE(86)
		::flixel::FlxSprite tmp26 = ::flixel::FlxSprite_obj::__new((int)34,(int)2,HX_HCSTRING("assets/images/sheep_head.png","\xaa","\x0c","\xd1","\xf4"));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(86)
		this->live2 = tmp26;
		HX_STACK_LINE(87)
		::flixel::FlxSprite tmp27 = this->live2;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(87)
		tmp27->scrollFactor->set((int)0,(int)0);
		HX_STACK_LINE(88)
		::flixel::FlxSprite tmp28 = this->live2;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(88)
		this->add(tmp28);
		HX_STACK_LINE(90)
		::flixel::FlxSprite tmp29 = ::flixel::FlxSprite_obj::__new((int)66,(int)2,HX_HCSTRING("assets/images/sheep_head.png","\xaa","\x0c","\xd1","\xf4"));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(90)
		this->live3 = tmp29;
		HX_STACK_LINE(91)
		::flixel::FlxSprite tmp30 = this->live3;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(91)
		tmp30->scrollFactor->set((int)0,(int)0);
		HX_STACK_LINE(92)
		::flixel::FlxSprite tmp31 = this->live3;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(92)
		this->add(tmp31);
		HX_STACK_LINE(94)
		::flixel::FlxSprite tmp32 = ::flixel::FlxSprite_obj::__new((int)2,(int)2,HX_HCSTRING("assets/images/sheep_head_dead.png","\x6f","\x63","\xd0","\xbe"));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(94)
		this->dead1 = tmp32;
		HX_STACK_LINE(95)
		::flixel::FlxSprite tmp33 = ::flixel::FlxSprite_obj::__new((int)32,(int)2,HX_HCSTRING("assets/images/sheep_head_dead.png","\x6f","\x63","\xd0","\xbe"));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(95)
		this->dead2 = tmp33;
		HX_STACK_LINE(96)
		::flixel::FlxSprite tmp34 = ::flixel::FlxSprite_obj::__new((int)66,(int)2,HX_HCSTRING("assets/images/sheep_head_dead.png","\x6f","\x63","\xd0","\xbe"));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(96)
		this->dead3 = tmp34;
		HX_STACK_LINE(97)
		::flixel::FlxSprite tmp35 = this->dead1;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(97)
		tmp35->scrollFactor->set((int)0,(int)0);
		HX_STACK_LINE(98)
		::flixel::FlxSprite tmp36 = this->dead2;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(98)
		tmp36->scrollFactor->set((int)0,(int)0);
		HX_STACK_LINE(99)
		::flixel::FlxSprite tmp37 = this->dead3;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(99)
		tmp37->scrollFactor->set((int)0,(int)0);
		HX_STACK_LINE(100)
		::flixel::FlxSprite tmp38 = this->dead1;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(100)
		tmp38->set_visible(false);
		HX_STACK_LINE(101)
		::flixel::FlxSprite tmp39 = this->dead2;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(101)
		tmp39->set_visible(false);
		HX_STACK_LINE(102)
		::flixel::FlxSprite tmp40 = this->dead3;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(102)
		tmp40->set_visible(false);
		HX_STACK_LINE(103)
		::flixel::FlxSprite tmp41 = this->dead1;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(103)
		this->add(tmp41);
		HX_STACK_LINE(104)
		::flixel::FlxSprite tmp42 = this->dead2;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(104)
		this->add(tmp42);
		HX_STACK_LINE(105)
		::flixel::FlxSprite tmp43 = this->dead3;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(105)
		this->add(tmp43);
		HX_STACK_LINE(107)
		::flixel::FlxSprite tmp44 = ::flixel::FlxSprite_obj::__new((int)146,(int)0,HX_HCSTRING("assets/images/score_board.png","\x29","\x19","\xba","\xca"));		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(107)
		this->scoreBoard = tmp44;
		HX_STACK_LINE(108)
		::flixel::FlxSprite tmp45 = this->scoreBoard;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(108)
		tmp45->scrollFactor->set((int)0,(int)0);
		HX_STACK_LINE(109)
		::flixel::FlxSprite tmp46 = this->scoreBoard;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(109)
		this->add(tmp46);
		HX_STACK_LINE(111)
		::flixel::text::FlxText tmp47 = ::flixel::text::FlxText_obj::__new((int)160,(int)5,(int)200,HX_HCSTRING("","\x00","\x00","\x00","\x00"),(int)10,true);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(111)
		this->scoreText = tmp47;
		HX_STACK_LINE(112)
		::flixel::text::FlxText tmp48 = this->scoreText;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(112)
		tmp48->scrollFactor->set((int)0,(int)0);
		HX_STACK_LINE(113)
		::flixel::text::FlxText tmp49 = this->scoreText;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(113)
		int tmp50 = this->score;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(113)
		::String tmp51 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(113)
		tmp49->set_text(tmp51);
		HX_STACK_LINE(114)
		::flixel::text::FlxText tmp52 = this->scoreText;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(114)
		this->add(tmp52);
		HX_STACK_LINE(116)
		Float tmp53 = this->ammoClipMaxY;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(116)
		::flixel::FlxSprite tmp54 = ::flixel::FlxSprite_obj::__new((int)253,tmp53,HX_HCSTRING("assets/images/ammo_clip.png","\xd1","\x23","\xe7","\x6c"));		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(116)
		this->ammoClip = tmp54;
		HX_STACK_LINE(117)
		::flixel::FlxSprite tmp55 = this->ammoClip;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(117)
		tmp55->scrollFactor->set((int)0,(int)0);
		HX_STACK_LINE(118)
		::flixel::FlxSprite tmp56 = this->ammoClip;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(118)
		this->add(tmp56);
	}
return null();
}


Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("PlayState","destroy",0x6ec756e9,"PlayState.destroy","PlayState.hx",127,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(127)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",134,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(135)
		this->super::update();
		HX_STACK_LINE(136)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		::Sheep tmp1 = this->sheep;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(136)
		tmp->follow(tmp1,(int)2,null(),(int)1);
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			::flixel::util::FlxRect tmp2 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(137)
			::flixel::util::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(137)
			::Sheep tmp3 = this->sheep;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(137)
			Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(137)
			Float tmp5 = (tmp4 - (int)300);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(137)
			_this->x = tmp5;
			HX_STACK_LINE(137)
			::Sheep tmp6 = this->sheep;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(137)
			_this->y = tmp6->y;
			HX_STACK_LINE(137)
			_this->width = (int)2000;
			HX_STACK_LINE(137)
			_this->height = (int)2000;
			HX_STACK_LINE(137)
			_this;
		}
		HX_STACK_LINE(138)
		::Sheep tmp2 = this->sheep;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(138)
		::MapGen tmp3 = this->map;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(138)
		tmp3->cameraX = tmp2->x;
		HX_STACK_LINE(140)
		::MapGen tmp4 = this->map;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(140)
		::Sheep tmp5 = this->sheep;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(140)
		tmp5->map = tmp4;
		HX_STACK_LINE(141)
		::Sheep tmp6 = this->sheep;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(141)
		::MapGen tmp7 = this->map;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(141)
		::flixel::group::FlxTypedGroup tmp8 = tmp7->collGrounds;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(141)
		::Sheep tmp9 = this->sheep;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(141)
		Dynamic tmp10 = tmp9->setLanded_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(141)
		Dynamic tmp11 = ::flixel::FlxObject_obj::separate_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(141)
		::flixel::FlxG_obj::overlap(tmp6,tmp8,tmp10,tmp11);
		HX_STACK_LINE(142)
		::flixel::group::FlxTypedGroup tmp12 = this->enemies;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(142)
		::Weapon tmp13 = this->weapons;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(142)
		::flixel::group::FlxTypedGroup tmp14 = tmp13->bullets;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(142)
		Dynamic tmp15 = this->hurtEnemy_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(142)
		::flixel::FlxG_obj::overlap(tmp12,tmp14,tmp15,null());
		HX_STACK_LINE(143)
		::Sheep tmp16 = this->sheep;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(143)
		::flixel::group::FlxTypedGroup tmp17 = this->enemieShots;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(143)
		Dynamic tmp18 = this->hurtPlayer_dyn();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(143)
		::flixel::FlxG_obj::overlap(tmp16,tmp17,tmp18,null());
		HX_STACK_LINE(144)
		::MapGen tmp19 = this->map;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(144)
		::flixel::group::FlxTypedGroup tmp20 = tmp19->collGrounds;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(144)
		::Weapon tmp21 = this->weapons;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(144)
		::flixel::group::FlxTypedGroup tmp22 = tmp21->bullets;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(144)
		Dynamic tmp23 = this->explode_dyn();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(144)
		::flixel::FlxG_obj::overlap(tmp20,tmp22,tmp23,null());
		HX_STACK_LINE(145)
		::MapGen tmp24 = this->map;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(145)
		::flixel::group::FlxTypedGroup tmp25 = tmp24->collGrounds;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(145)
		::flixel::group::FlxTypedGroup tmp26 = this->enemieShots;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(145)
		Dynamic tmp27 = this->explode_dyn();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(145)
		::flixel::FlxG_obj::overlap(tmp25,tmp26,tmp27,null());
		HX_STACK_LINE(148)
		::Weapon tmp28 = this->weapons;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(148)
		::Sheep tmp29 = this->sheep;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(148)
		Float tmp30 = tmp29->x;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(148)
		::Sheep tmp31 = this->sheep;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(148)
		Float tmp32 = tmp31->y;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(148)
		tmp28->setPos(tmp30,tmp32);
		HX_STACK_LINE(149)
		::Weapon tmp33 = this->weapons;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(149)
		::Sheep tmp34 = this->sheep;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(149)
		bool tmp35 = tmp34->flipX;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(149)
		tmp33->flipPos(tmp35);
		HX_STACK_LINE(159)
		int tmp36 = this->score;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(159)
		int tmp37 = this->w;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(159)
		int tmp38 = (tmp37 + (int)2);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(159)
		int tmp39 = (tmp38 * (int)100);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(159)
		bool tmp40 = (tmp36 > tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(159)
		if ((tmp40)){
			HX_STACK_LINE(160)
			(this->w)++;
		}
		HX_STACK_LINE(163)
		::Weapon tmp41 = this->weapons;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(163)
		int tmp42 = this->w;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(163)
		tmp41->setWeaponNumber(tmp42);
		HX_STACK_LINE(165)
		::MapGen tmp43 = this->map;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(165)
		::flixel::group::FlxTypedGroupIterator tmp44 = ::flixel::group::FlxTypedGroupIterator_obj::__new(tmp43->visGrounds->members,null());		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(165)
		for(::cpp::FastIterator_obj< ::flixel::FlxSprite > *__it = ::cpp::CreateFastIterator< ::flixel::FlxSprite >(tmp44);  __it->hasNext(); ){
			::flixel::FlxSprite val = __it->next();
			{
				HX_STACK_LINE(166)
				::Sheep tmp45 = this->sheep;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(166)
				Float tmp46 = tmp45->x;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(166)
				Float tmp47 = val->x;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(166)
				Float tmp48 = (tmp46 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(166)
				bool tmp49 = (tmp48 > (int)600);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(166)
				if ((tmp49)){
					HX_STACK_LINE(167)
					val->destroy();
				}
			}
;
		}
		HX_STACK_LINE(172)
		::flixel::FlxSprite tmp45 = this->ammoClip;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(172)
		Float tmp46 = this->ammoClipMaxY;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(172)
		::Weapon tmp47 = this->weapons;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(172)
		int tmp48 = tmp47->shotsFired;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(172)
		::Weapon tmp49 = this->weapons;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(172)
		int tmp50 = tmp49->ammo;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(172)
		Float tmp51 = (Float(tmp48) / Float(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(172)
		Float tmp52 = ((int)96 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(172)
		Float tmp53 = (tmp46 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(172)
		tmp45->set_y(tmp53);
		HX_STACK_LINE(173)
		int tmp54 = this->kills;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(173)
		int tmp55 = (tmp54 * (int)100);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(173)
		this->score = tmp55;
		HX_STACK_LINE(174)
		::flixel::text::FlxText tmp56 = this->scoreText;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(174)
		int tmp57 = this->score;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(174)
		::String tmp58 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(174)
		tmp56->set_text(tmp58);
		HX_STACK_LINE(176)
		::Sheep tmp59 = this->sheep;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(176)
		Float tmp60 = tmp59->y;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(176)
		bool tmp61 = (tmp60 > (int)1050);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(176)
		if ((tmp61)){
			HX_STACK_LINE(177)
			::Sheep tmp62 = this->sheep;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(177)
			tmp62->destroy();
			HX_STACK_LINE(178)
			{
				HX_STACK_LINE(178)
				::GameOver tmp63 = ::GameOver_obj::__new(null());		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(178)
				::flixel::FlxState State = tmp63;		HX_STACK_VAR(State,"State");
				HX_STACK_LINE(178)
				::flixel::FlxGame tmp64 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(178)
				tmp64->_requestedState = State;
			}
		}
	}
return null();
}


Void PlayState_obj::hurtPlayer( ::Sheep player,::Bullet bullet){
{
		HX_STACK_FRAME("PlayState","hurtPlayer",0xcf2c2641,"PlayState.hurtPlayer","PlayState.hx",182,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_ARG(bullet,"bullet")
		HX_STACK_LINE(185)
		::Sheep tmp = player;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(185)
		::Bullet tmp1 = bullet;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(185)
		bool tmp2 = ::flixel::util::FlxCollision_obj::pixelPerfectCheck(tmp,tmp1,(int)255,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(185)
		if ((tmp2)){
			HX_STACK_LINE(186)
			bool tmp3 = player->damage();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(186)
			if ((tmp3)){
				HX_STACK_LINE(187)
				::flixel::FlxCamera tmp4 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(187)
				tmp4->flash((int)-65536,((Float)0.1),null(),null());
				HX_STACK_LINE(188)
				{
					HX_STACK_LINE(188)
					int _g = player->lives;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(188)
					int tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(188)
					switch( (int)(tmp5)){
						case (int)2: {
							HX_STACK_LINE(190)
							::flixel::FlxSprite tmp6 = this->dead3;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(190)
							tmp6->set_visible(true);
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(192)
							::flixel::FlxSprite tmp6 = this->dead3;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(192)
							tmp6->set_visible(true);
							HX_STACK_LINE(193)
							::flixel::FlxSprite tmp7 = this->dead2;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(193)
							tmp7->set_visible(true);
						}
						;break;
						case (int)0: {
							HX_STACK_LINE(195)
							::flixel::FlxSprite tmp6 = this->dead3;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(195)
							tmp6->set_visible(true);
							HX_STACK_LINE(196)
							::flixel::FlxSprite tmp7 = this->dead2;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(196)
							tmp7->set_visible(true);
							HX_STACK_LINE(197)
							::flixel::FlxSprite tmp8 = this->dead1;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(197)
							tmp8->set_visible(true);
						}
						;break;
					}
				}
			}
			HX_STACK_LINE(200)
			bullet->destroy();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,hurtPlayer,(void))

Void PlayState_obj::hurtEnemy( ::Enemy enemy,::Bullet bullet){
{
		HX_STACK_FRAME("PlayState","hurtEnemy",0xfc10d368,"PlayState.hurtEnemy","PlayState.hx",205,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enemy,"enemy")
		HX_STACK_ARG(bullet,"bullet")
		HX_STACK_LINE(209)
		bullet->destroy();
		HX_STACK_LINE(210)
		enemy->damage();
		HX_STACK_LINE(211)
		(this->kills)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,hurtEnemy,(void))

Void PlayState_obj::explode( ::flixel::FlxSprite ground,::Bullet b){
{
		HX_STACK_FRAME("PlayState","explode",0x71a4e5d0,"PlayState.explode","PlayState.hx",216,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ground,"ground")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(218)
		::Explosion tmp = ::Explosion_obj::__new(b->x,b->y);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(218)
		::Explosion explode = tmp;		HX_STACK_VAR(explode,"explode");
		HX_STACK_LINE(219)
		::Explosion tmp1 = explode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(219)
		this->add(tmp1);
		HX_STACK_LINE(220)
		b->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,explode,(void))


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(sheep,"sheep");
	HX_MARK_MEMBER_NAME(weapons,"weapons");
	HX_MARK_MEMBER_NAME(enemies,"enemies");
	HX_MARK_MEMBER_NAME(enemieShots,"enemieShots");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(live1,"live1");
	HX_MARK_MEMBER_NAME(live2,"live2");
	HX_MARK_MEMBER_NAME(live3,"live3");
	HX_MARK_MEMBER_NAME(dead1,"dead1");
	HX_MARK_MEMBER_NAME(dead2,"dead2");
	HX_MARK_MEMBER_NAME(dead3,"dead3");
	HX_MARK_MEMBER_NAME(scoreBoard,"scoreBoard");
	HX_MARK_MEMBER_NAME(ammoClip,"ammoClip");
	HX_MARK_MEMBER_NAME(ammoClipMaxY,"ammoClipMaxY");
	HX_MARK_MEMBER_NAME(score,"score");
	HX_MARK_MEMBER_NAME(scoreText,"scoreText");
	HX_MARK_MEMBER_NAME(kills,"kills");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sheep,"sheep");
	HX_VISIT_MEMBER_NAME(weapons,"weapons");
	HX_VISIT_MEMBER_NAME(enemies,"enemies");
	HX_VISIT_MEMBER_NAME(enemieShots,"enemieShots");
	HX_VISIT_MEMBER_NAME(w,"w");
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(live1,"live1");
	HX_VISIT_MEMBER_NAME(live2,"live2");
	HX_VISIT_MEMBER_NAME(live3,"live3");
	HX_VISIT_MEMBER_NAME(dead1,"dead1");
	HX_VISIT_MEMBER_NAME(dead2,"dead2");
	HX_VISIT_MEMBER_NAME(dead3,"dead3");
	HX_VISIT_MEMBER_NAME(scoreBoard,"scoreBoard");
	HX_VISIT_MEMBER_NAME(ammoClip,"ammoClip");
	HX_VISIT_MEMBER_NAME(ammoClipMaxY,"ammoClipMaxY");
	HX_VISIT_MEMBER_NAME(score,"score");
	HX_VISIT_MEMBER_NAME(scoreText,"scoreText");
	HX_VISIT_MEMBER_NAME(kills,"kills");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sheep") ) { return sheep; }
		if (HX_FIELD_EQ(inName,"live1") ) { return live1; }
		if (HX_FIELD_EQ(inName,"live2") ) { return live2; }
		if (HX_FIELD_EQ(inName,"live3") ) { return live3; }
		if (HX_FIELD_EQ(inName,"dead1") ) { return dead1; }
		if (HX_FIELD_EQ(inName,"dead2") ) { return dead2; }
		if (HX_FIELD_EQ(inName,"dead3") ) { return dead3; }
		if (HX_FIELD_EQ(inName,"score") ) { return score; }
		if (HX_FIELD_EQ(inName,"kills") ) { return kills; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"weapons") ) { return weapons; }
		if (HX_FIELD_EQ(inName,"enemies") ) { return enemies; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"explode") ) { return explode_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ammoClip") ) { return ammoClip; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scoreText") ) { return scoreText; }
		if (HX_FIELD_EQ(inName,"hurtEnemy") ) { return hurtEnemy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scoreBoard") ) { return scoreBoard; }
		if (HX_FIELD_EQ(inName,"hurtPlayer") ) { return hurtPlayer_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"enemieShots") ) { return enemieShots; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ammoClipMaxY") ) { return ammoClipMaxY; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::MapGen >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sheep") ) { sheep=inValue.Cast< ::Sheep >(); return inValue; }
		if (HX_FIELD_EQ(inName,"live1") ) { live1=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"live2") ) { live2=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"live3") ) { live3=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dead1") ) { dead1=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dead2") ) { dead2=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dead3") ) { dead3=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"score") ) { score=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kills") ) { kills=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"weapons") ) { weapons=inValue.Cast< ::Weapon >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enemies") ) { enemies=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ammoClip") ) { ammoClip=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scoreText") ) { scoreText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scoreBoard") ) { scoreBoard=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"enemieShots") ) { enemieShots=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ammoClipMaxY") ) { ammoClipMaxY=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("sheep","\x9b","\xe2","\x1f","\x7c"));
	outFields->push(HX_HCSTRING("weapons","\x17","\x6a","\xc0","\xda"));
	outFields->push(HX_HCSTRING("enemies","\xa6","\x68","\x0e","\xd3"));
	outFields->push(HX_HCSTRING("enemieShots","\xcc","\xf3","\x26","\x8b"));
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("live1","\xc5","\xef","\x07","\x75"));
	outFields->push(HX_HCSTRING("live2","\xc6","\xef","\x07","\x75"));
	outFields->push(HX_HCSTRING("live3","\xc7","\xef","\x07","\x75"));
	outFields->push(HX_HCSTRING("dead1","\x0d","\x81","\x1e","\xd7"));
	outFields->push(HX_HCSTRING("dead2","\x0e","\x81","\x1e","\xd7"));
	outFields->push(HX_HCSTRING("dead3","\x0f","\x81","\x1e","\xd7"));
	outFields->push(HX_HCSTRING("scoreBoard","\xf4","\x39","\x64","\xf2"));
	outFields->push(HX_HCSTRING("ammoClip","\x3e","\x21","\xbd","\x0b"));
	outFields->push(HX_HCSTRING("ammoClipMaxY","\x93","\x09","\x69","\x4d"));
	outFields->push(HX_HCSTRING("score","\x52","\x73","\xd9","\x78"));
	outFields->push(HX_HCSTRING("scoreText","\x1f","\x7d","\xbd","\xdc"));
	outFields->push(HX_HCSTRING("kills","\x15","\xcb","\x99","\xe1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Sheep*/ ,(int)offsetof(PlayState_obj,sheep),HX_HCSTRING("sheep","\x9b","\xe2","\x1f","\x7c")},
	{hx::fsObject /*::Weapon*/ ,(int)offsetof(PlayState_obj,weapons),HX_HCSTRING("weapons","\x17","\x6a","\xc0","\xda")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,enemies),HX_HCSTRING("enemies","\xa6","\x68","\x0e","\xd3")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,enemieShots),HX_HCSTRING("enemieShots","\xcc","\xf3","\x26","\x8b")},
	{hx::fsInt,(int)offsetof(PlayState_obj,w),HX_HCSTRING("w","\x77","\x00","\x00","\x00")},
	{hx::fsObject /*::MapGen*/ ,(int)offsetof(PlayState_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,live1),HX_HCSTRING("live1","\xc5","\xef","\x07","\x75")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,live2),HX_HCSTRING("live2","\xc6","\xef","\x07","\x75")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,live3),HX_HCSTRING("live3","\xc7","\xef","\x07","\x75")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,dead1),HX_HCSTRING("dead1","\x0d","\x81","\x1e","\xd7")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,dead2),HX_HCSTRING("dead2","\x0e","\x81","\x1e","\xd7")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,dead3),HX_HCSTRING("dead3","\x0f","\x81","\x1e","\xd7")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,scoreBoard),HX_HCSTRING("scoreBoard","\xf4","\x39","\x64","\xf2")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,ammoClip),HX_HCSTRING("ammoClip","\x3e","\x21","\xbd","\x0b")},
	{hx::fsFloat,(int)offsetof(PlayState_obj,ammoClipMaxY),HX_HCSTRING("ammoClipMaxY","\x93","\x09","\x69","\x4d")},
	{hx::fsInt,(int)offsetof(PlayState_obj,score),HX_HCSTRING("score","\x52","\x73","\xd9","\x78")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,scoreText),HX_HCSTRING("scoreText","\x1f","\x7d","\xbd","\xdc")},
	{hx::fsInt,(int)offsetof(PlayState_obj,kills),HX_HCSTRING("kills","\x15","\xcb","\x99","\xe1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("sheep","\x9b","\xe2","\x1f","\x7c"),
	HX_HCSTRING("weapons","\x17","\x6a","\xc0","\xda"),
	HX_HCSTRING("enemies","\xa6","\x68","\x0e","\xd3"),
	HX_HCSTRING("enemieShots","\xcc","\xf3","\x26","\x8b"),
	HX_HCSTRING("w","\x77","\x00","\x00","\x00"),
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("live1","\xc5","\xef","\x07","\x75"),
	HX_HCSTRING("live2","\xc6","\xef","\x07","\x75"),
	HX_HCSTRING("live3","\xc7","\xef","\x07","\x75"),
	HX_HCSTRING("dead1","\x0d","\x81","\x1e","\xd7"),
	HX_HCSTRING("dead2","\x0e","\x81","\x1e","\xd7"),
	HX_HCSTRING("dead3","\x0f","\x81","\x1e","\xd7"),
	HX_HCSTRING("scoreBoard","\xf4","\x39","\x64","\xf2"),
	HX_HCSTRING("ammoClip","\x3e","\x21","\xbd","\x0b"),
	HX_HCSTRING("ammoClipMaxY","\x93","\x09","\x69","\x4d"),
	HX_HCSTRING("score","\x52","\x73","\xd9","\x78"),
	HX_HCSTRING("scoreText","\x1f","\x7d","\xbd","\xdc"),
	HX_HCSTRING("kills","\x15","\xcb","\x99","\xe1"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("hurtPlayer","\xd0","\xb0","\x13","\x43"),
	HX_HCSTRING("hurtEnemy","\xb9","\x0f","\xbe","\xbf"),
	HX_HCSTRING("explode","\xe1","\xbb","\x63","\x27"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlayState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

