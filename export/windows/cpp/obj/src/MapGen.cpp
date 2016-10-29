#include <hxcpp.h>

#ifndef INCLUDED_Enemy
#include <Enemy.h>
#endif
#ifndef INCLUDED_EnemyType
#include <EnemyType.h>
#endif
#ifndef INCLUDED_MapGen
#include <MapGen.h>
#endif
#ifndef INCLUDED_Sheep
#include <Sheep.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif

Void MapGen_obj::__construct(int minHeight,int maxHeight)
{
HX_STACK_FRAME("MapGen","new",0x293f9666,"MapGen.new","MapGen.hx",10,0x23c5b7ca)
HX_STACK_THIS(this)
HX_STACK_ARG(minHeight,"minHeight")
HX_STACK_ARG(maxHeight,"maxHeight")
{
	HX_STACK_LINE(26)
	this->enemieShots = ::flixel::group::FlxTypedGroup_obj::__new(null());
	HX_STACK_LINE(25)
	this->enemies = ::flixel::group::FlxTypedGroup_obj::__new(null());
	HX_STACK_LINE(23)
	this->cameraX = ((Float)0);
	HX_STACK_LINE(21)
	this->maxRange = (int)150;
	HX_STACK_LINE(20)
	this->Range = ((Float)800);
	HX_STACK_LINE(19)
	this->maxHeight = (int)0;
	HX_STACK_LINE(18)
	this->minHeight = (int)1000;
	HX_STACK_LINE(17)
	this->activeY = (int)0;
	HX_STACK_LINE(16)
	this->activeX = (int)0;
	HX_STACK_LINE(14)
	this->debugFus = ::flixel::group::FlxTypedGroup_obj::__new(null());
	HX_STACK_LINE(13)
	this->visGrounds = ::flixel::group::FlxTypedGroup_obj::__new(null());
	HX_STACK_LINE(12)
	this->collGrounds = ::flixel::group::FlxTypedGroup_obj::__new(null());
	HX_STACK_LINE(31)
	super::__construct();
	HX_STACK_LINE(32)
	this->activeX = (int)0;
	HX_STACK_LINE(33)
	int tmp = (minHeight - (int)50);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	this->activeY = tmp;
}
;
	return null();
}

//MapGen_obj::~MapGen_obj() { }

Dynamic MapGen_obj::__CreateEmpty() { return  new MapGen_obj; }
hx::ObjectPtr< MapGen_obj > MapGen_obj::__new(int minHeight,int maxHeight)
{  hx::ObjectPtr< MapGen_obj > _result_ = new MapGen_obj();
	_result_->__construct(minHeight,maxHeight);
	return _result_;}

Dynamic MapGen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MapGen_obj > _result_ = new MapGen_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void MapGen_obj::update( ){
{
		HX_STACK_FRAME("MapGen","update",0x6730c7c3,"MapGen.update","MapGen.hx",38,0x23c5b7ca)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		this->super::update();
		HX_STACK_LINE(40)
		this->updateWorld();
	}
return null();
}


Void MapGen_obj::destroy( ){
{
		HX_STACK_FRAME("MapGen","destroy",0x6a346e00,"MapGen.destroy","MapGen.hx",45,0x23c5b7ca)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		this->super::destroy();
	}
return null();
}


Void MapGen_obj::updateWorld( ){
{
		HX_STACK_FRAME("MapGen","updateWorld",0xe8c73b8f,"MapGen.updateWorld","MapGen.hx",49,0x23c5b7ca)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		int tmp = this->activeX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		Float tmp1 = this->cameraX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		Float tmp2 = this->Range;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		bool tmp4 = (tmp < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		if ((tmp4)){
			HX_STACK_LINE(51)
			int tmp5 = this->minHeight;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			int tmp6 = ::flixel::util::FlxRandom_obj::intRanged((int)-10,(int)30,null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(51)
			int tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(51)
			this->activeY = tmp7;
			HX_STACK_LINE(52)
			int tmp8 = this->maxRange;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(52)
			int tmp9 = ::flixel::util::FlxRandom_obj::intRanged((int)20,tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(52)
			int length = tmp9;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(53)
			int tmp10 = this->activeX;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(53)
			int tmp11 = this->activeY;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(53)
			int tmp12 = length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(53)
			int tmp13 = this->activeY;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(53)
			int tmp14 = ((int)1000 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(53)
			this->createGround(tmp10,tmp11,tmp12,tmp14,(int)15);
			HX_STACK_LINE(54)
			int tmp15 = this->activeX;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(54)
			bool tmp16 = (tmp15 > (int)400);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(54)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(54)
			if ((tmp16)){
				HX_STACK_LINE(54)
				Float tmp18 = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(54)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(54)
				tmp17 = (tmp19 < (int)50);
			}
			else{
				HX_STACK_LINE(54)
				tmp17 = false;
			}
			HX_STACK_LINE(54)
			if ((tmp17)){
				HX_STACK_LINE(55)
				int tmp18 = this->activeX;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(55)
				int tmp19 = this->activeY;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(55)
				int tmp20 = (tmp19 - (int)35);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(55)
				int tmp21 = this->activeX;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(55)
				int tmp22 = (tmp21 - (int)10);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(55)
				int tmp23 = this->activeX;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(55)
				int tmp24 = length;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(55)
				int tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(55)
				int tmp26 = (tmp25 - (int)10);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(55)
				this->addDownEnemy(tmp18,tmp20,tmp22,tmp26);
			}
			HX_STACK_LINE(57)
			int tmp18 = this->activeX;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(57)
			bool tmp19 = (tmp18 > (int)400);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(57)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(57)
			if ((tmp19)){
				HX_STACK_LINE(57)
				Float tmp21 = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(57)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(57)
				tmp20 = (tmp22 < (int)25);
			}
			else{
				HX_STACK_LINE(57)
				tmp20 = false;
			}
			HX_STACK_LINE(57)
			if ((tmp20)){
				HX_STACK_LINE(58)
				int tmp21 = this->activeX;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(58)
				int tmp22 = this->activeY;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(58)
				int tmp23 = (tmp22 - (int)80);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(58)
				this->addFlyEnemy(tmp21,tmp23);
			}
			HX_STACK_LINE(60)
			int tmp21 = this->activeY;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(60)
			this->minHeight = tmp21;
			HX_STACK_LINE(61)
			int tmp22 = this->maxRange;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(61)
			int tmp23 = ::flixel::util::FlxRandom_obj::intRanged((int)10,(int)130,null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(61)
			int tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(61)
			hx::AddEq(this->activeX,tmp24);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MapGen_obj,updateWorld,(void))

Void MapGen_obj::createGround( int x,int y,int w,int h,int depth){
{
		HX_STACK_FRAME("MapGen","createGround",0x3aa7abdd,"MapGen.createGround","MapGen.hx",66,0x23c5b7ca)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_ARG(depth,"depth")
		HX_STACK_LINE(67)
		::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		::flixel::FlxSprite ground = tmp;		HX_STACK_VAR(ground,"ground");
		HX_STACK_LINE(68)
		int tmp1 = w;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		int tmp2 = (depth + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		ground->makeGraphic(tmp1,tmp2,(int)-12171706,null(),null());
		HX_STACK_LINE(69)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		ground->set_x(tmp3);
		HX_STACK_LINE(70)
		int tmp4 = (y - depth);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(70)
		ground->set_y(tmp4);
		HX_STACK_LINE(73)
		::flixel::group::FlxTypedGroup tmp5 = this->visGrounds;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(73)
		::flixel::FlxSprite tmp6 = ground;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(73)
		tmp5->add(tmp6);
		HX_STACK_LINE(74)
		::flixel::FlxSprite tmp7 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(74)
		::flixel::FlxSprite collGround = tmp7;		HX_STACK_VAR(collGround,"collGround");
		HX_STACK_LINE(75)
		int tmp8 = w;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(75)
		int tmp9 = h;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(75)
		int tmp10 = ::flixel::util::FlxRandom_obj::colorExt((int)-15,(int)15,(int)-15,(int)15,(int)-15,(int)15,(int)-1,(int)-1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(75)
		int tmp11 = ((int)-6927616 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(75)
		collGround->makeGraphic(tmp8,tmp9,tmp11,null(),null());
		HX_STACK_LINE(76)
		int tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(76)
		int tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(76)
		collGround->setPosition(tmp12,tmp13);
		HX_STACK_LINE(77)
		collGround->set_immovable(true);
		HX_STACK_LINE(80)
		::flixel::group::FlxTypedGroup tmp14 = this->collGrounds;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(80)
		::flixel::FlxSprite tmp15 = collGround;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(80)
		tmp14->add(tmp15);
		HX_STACK_LINE(88)
		int tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(88)
		int tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(88)
		int tmp18 = w;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(88)
		int tmp19 = h;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(88)
		this->createRandomVis_(tmp16,tmp17,tmp18,tmp19);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(MapGen_obj,createGround,(void))

Void MapGen_obj::debugFu( int x,int y){
{
		HX_STACK_FRAME("MapGen","debugFu",0xa1054b88,"MapGen.debugFu","MapGen.hx",92,0x23c5b7ca)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(93)
		::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		::flixel::FlxSprite fu = tmp;		HX_STACK_VAR(fu,"fu");
		HX_STACK_LINE(94)
		fu->makeGraphic((int)4,(int)4,(int)-16744448,null(),null());
		HX_STACK_LINE(95)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		fu->setPosition(tmp1,tmp2);
		HX_STACK_LINE(96)
		::flixel::group::FlxTypedGroup tmp3 = this->debugFus;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(96)
		::flixel::FlxSprite tmp4 = fu;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(96)
		tmp3->add(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MapGen_obj,debugFu,(void))

Void MapGen_obj::createRandomVis_( int x,int y,int w,int h){
{
		HX_STACK_FRAME("MapGen","createRandomVis_",0xf2123678,"MapGen.createRandomVis_","MapGen.hx",100,0x23c5b7ca)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(101)
		int i = x;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(102)
		while((true)){
			HX_STACK_LINE(102)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(102)
			int tmp1 = (x + w);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(102)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(102)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(102)
			if ((tmp2)){
				HX_STACK_LINE(102)
				tmp3 = (y < (int)980);
			}
			else{
				HX_STACK_LINE(102)
				tmp3 = false;
			}
			HX_STACK_LINE(102)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(102)
			if ((tmp4)){
				HX_STACK_LINE(102)
				break;
			}
			HX_STACK_LINE(103)
			::flixel::FlxSprite tmp5 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(103)
			::flixel::FlxSprite ground = tmp5;		HX_STACK_VAR(ground,"ground");
			HX_STACK_LINE(104)
			ground->makeGraphic((int)4,(int)4,(int)-12171706,null(),null());
			HX_STACK_LINE(105)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(105)
			int tmp7 = (y + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(105)
			ground->setPosition(tmp6,tmp7);
			HX_STACK_LINE(106)
			::flixel::group::FlxTypedGroup tmp8 = this->visGrounds;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(106)
			::flixel::FlxSprite tmp9 = ground;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(106)
			tmp8->add(tmp9);
			HX_STACK_LINE(107)
			int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(107)
			int tmp11 = (y + (int)5);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(107)
			this->createRandomVisRec(tmp10,tmp11,(int)50);
			HX_STACK_LINE(108)
			hx::AddEq(i,(int)4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(MapGen_obj,createRandomVis_,(void))

Void MapGen_obj::createRandomVisRec( int x,int y,int op){
{
		HX_STACK_FRAME("MapGen","createRandomVisRec",0x43dd3f89,"MapGen.createRandomVisRec","MapGen.hx",112,0x23c5b7ca)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(op,"op")
		HX_STACK_LINE(114)
		::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		::flixel::FlxSprite ground = tmp;		HX_STACK_VAR(ground,"ground");
		HX_STACK_LINE(115)
		int tmp1 = op;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		int tmp2 = (op + (int)30);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(115)
		int tmp3 = ::flixel::util::FlxRandom_obj::colorExt((int)0,(int)0,(int)0,(int)0,(int)0,(int)0,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(115)
		int tmp4 = ((int)-12171706 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(115)
		ground->makeGraphic((int)4,(int)4,tmp4,null(),null());
		HX_STACK_LINE(116)
		hx::AddEq(op,(int)20);
		HX_STACK_LINE(117)
		int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(117)
		int tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(117)
		ground->setPosition(tmp5,tmp6);
		HX_STACK_LINE(118)
		::flixel::group::FlxTypedGroup tmp7 = this->visGrounds;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(118)
		::flixel::FlxSprite tmp8 = ground;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(118)
		tmp7->add(tmp8);
		HX_STACK_LINE(119)
		Float tmp9 = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(119)
		bool tmp10 = (tmp9 < (int)70);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(119)
		bool spread = tmp10;		HX_STACK_VAR(spread,"spread");
		HX_STACK_LINE(120)
		bool tmp11 = spread;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(120)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(120)
		if ((tmp11)){
			HX_STACK_LINE(120)
			tmp12 = (y < (int)980);
		}
		else{
			HX_STACK_LINE(120)
			tmp12 = false;
		}
		HX_STACK_LINE(120)
		if ((tmp12)){
			HX_STACK_LINE(121)
			int tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(121)
			int tmp14 = (y + (int)4);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(121)
			int tmp15 = op;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(121)
			this->createRandomVisRec(tmp13,tmp14,tmp15);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(MapGen_obj,createRandomVisRec,(void))

Void MapGen_obj::addDownEnemy( int x,int y,int xb,int yb){
{
		HX_STACK_FRAME("MapGen","addDownEnemy",0x820f515f,"MapGen.addDownEnemy","MapGen.hx",126,0x23c5b7ca)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(xb,"xb")
		HX_STACK_ARG(yb,"yb")
		HX_STACK_LINE(127)
		::Enemy tmp = ::Enemy_obj::__new(x,y,::EnemyType_obj::NAZI_SHEEP,true,xb,yb);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		::Enemy enemy = tmp;		HX_STACK_VAR(enemy,"enemy");
		HX_STACK_LINE(128)
		::Sheep tmp1 = this->sheep;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(128)
		enemy->sheep = tmp1;
		HX_STACK_LINE(129)
		::flixel::group::FlxTypedGroup tmp2 = this->enemieShots;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(129)
		::flixel::group::FlxTypedGroup tmp3 = enemy->enemyShots;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(129)
		tmp2->add(tmp3);
		HX_STACK_LINE(130)
		::flixel::group::FlxTypedGroup tmp4 = this->enemies;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(130)
		::Enemy tmp5 = enemy;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(130)
		tmp4->add(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(MapGen_obj,addDownEnemy,(void))

Void MapGen_obj::addFlyEnemy( int x,int y){
{
		HX_STACK_FRAME("MapGen","addFlyEnemy",0x2025301c,"MapGen.addFlyEnemy","MapGen.hx",134,0x23c5b7ca)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(135)
		::Enemy tmp = ::Enemy_obj::__new(x,y,::EnemyType_obj::NAZI_SHEEP_FLYING,null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(135)
		::Enemy enemy = tmp;		HX_STACK_VAR(enemy,"enemy");
		HX_STACK_LINE(136)
		::Sheep tmp1 = this->sheep;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(136)
		enemy->sheep = tmp1;
		HX_STACK_LINE(137)
		::flixel::group::FlxTypedGroup tmp2 = this->enemieShots;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(137)
		::flixel::group::FlxTypedGroup tmp3 = enemy->enemyShots;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(137)
		tmp2->add(tmp3);
		HX_STACK_LINE(138)
		::flixel::group::FlxTypedGroup tmp4 = this->enemies;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(138)
		::Enemy tmp5 = enemy;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(138)
		tmp4->add(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MapGen_obj,addFlyEnemy,(void))


MapGen_obj::MapGen_obj()
{
}

void MapGen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MapGen);
	HX_MARK_MEMBER_NAME(collGrounds,"collGrounds");
	HX_MARK_MEMBER_NAME(visGrounds,"visGrounds");
	HX_MARK_MEMBER_NAME(debugFus,"debugFus");
	HX_MARK_MEMBER_NAME(activeX,"activeX");
	HX_MARK_MEMBER_NAME(activeY,"activeY");
	HX_MARK_MEMBER_NAME(minHeight,"minHeight");
	HX_MARK_MEMBER_NAME(maxHeight,"maxHeight");
	HX_MARK_MEMBER_NAME(Range,"Range");
	HX_MARK_MEMBER_NAME(maxRange,"maxRange");
	HX_MARK_MEMBER_NAME(cameraX,"cameraX");
	HX_MARK_MEMBER_NAME(enemies,"enemies");
	HX_MARK_MEMBER_NAME(enemieShots,"enemieShots");
	HX_MARK_MEMBER_NAME(sheep,"sheep");
	HX_MARK_END_CLASS();
}

void MapGen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(collGrounds,"collGrounds");
	HX_VISIT_MEMBER_NAME(visGrounds,"visGrounds");
	HX_VISIT_MEMBER_NAME(debugFus,"debugFus");
	HX_VISIT_MEMBER_NAME(activeX,"activeX");
	HX_VISIT_MEMBER_NAME(activeY,"activeY");
	HX_VISIT_MEMBER_NAME(minHeight,"minHeight");
	HX_VISIT_MEMBER_NAME(maxHeight,"maxHeight");
	HX_VISIT_MEMBER_NAME(Range,"Range");
	HX_VISIT_MEMBER_NAME(maxRange,"maxRange");
	HX_VISIT_MEMBER_NAME(cameraX,"cameraX");
	HX_VISIT_MEMBER_NAME(enemies,"enemies");
	HX_VISIT_MEMBER_NAME(enemieShots,"enemieShots");
	HX_VISIT_MEMBER_NAME(sheep,"sheep");
}

Dynamic MapGen_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"Range") ) { return Range; }
		if (HX_FIELD_EQ(inName,"sheep") ) { return sheep; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"activeX") ) { return activeX; }
		if (HX_FIELD_EQ(inName,"activeY") ) { return activeY; }
		if (HX_FIELD_EQ(inName,"cameraX") ) { return cameraX; }
		if (HX_FIELD_EQ(inName,"enemies") ) { return enemies; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"debugFu") ) { return debugFu_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"debugFus") ) { return debugFus; }
		if (HX_FIELD_EQ(inName,"maxRange") ) { return maxRange; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minHeight") ) { return minHeight; }
		if (HX_FIELD_EQ(inName,"maxHeight") ) { return maxHeight; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"visGrounds") ) { return visGrounds; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collGrounds") ) { return collGrounds; }
		if (HX_FIELD_EQ(inName,"enemieShots") ) { return enemieShots; }
		if (HX_FIELD_EQ(inName,"updateWorld") ) { return updateWorld_dyn(); }
		if (HX_FIELD_EQ(inName,"addFlyEnemy") ) { return addFlyEnemy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createGround") ) { return createGround_dyn(); }
		if (HX_FIELD_EQ(inName,"addDownEnemy") ) { return addDownEnemy_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createRandomVis_") ) { return createRandomVis__dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createRandomVisRec") ) { return createRandomVisRec_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MapGen_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"Range") ) { Range=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sheep") ) { sheep=inValue.Cast< ::Sheep >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"activeX") ) { activeX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"activeY") ) { activeY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameraX") ) { cameraX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enemies") ) { enemies=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"debugFus") ) { debugFus=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxRange") ) { maxRange=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minHeight") ) { minHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxHeight") ) { maxHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"visGrounds") ) { visGrounds=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collGrounds") ) { collGrounds=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enemieShots") ) { enemieShots=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MapGen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("collGrounds","\x40","\x21","\xb5","\xa9"));
	outFields->push(HX_HCSTRING("visGrounds","\x0c","\xd2","\x47","\x2d"));
	outFields->push(HX_HCSTRING("debugFus","\xb1","\x27","\xd2","\x90"));
	outFields->push(HX_HCSTRING("activeX","\xd2","\x4b","\x33","\x67"));
	outFields->push(HX_HCSTRING("activeY","\xd3","\x4b","\x33","\x67"));
	outFields->push(HX_HCSTRING("minHeight","\x19","\x07","\x94","\x5b"));
	outFields->push(HX_HCSTRING("maxHeight","\xab","\x19","\xd7","\x31"));
	outFields->push(HX_HCSTRING("Range","\x9d","\x15","\x4d","\x77"));
	outFields->push(HX_HCSTRING("maxRange","\x79","\xf8","\x3c","\x8e"));
	outFields->push(HX_HCSTRING("cameraX","\x13","\x8a","\x31","\xe3"));
	outFields->push(HX_HCSTRING("enemies","\xa6","\x68","\x0e","\xd3"));
	outFields->push(HX_HCSTRING("enemieShots","\xcc","\xf3","\x26","\x8b"));
	outFields->push(HX_HCSTRING("sheep","\x9b","\xe2","\x1f","\x7c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(MapGen_obj,collGrounds),HX_HCSTRING("collGrounds","\x40","\x21","\xb5","\xa9")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(MapGen_obj,visGrounds),HX_HCSTRING("visGrounds","\x0c","\xd2","\x47","\x2d")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(MapGen_obj,debugFus),HX_HCSTRING("debugFus","\xb1","\x27","\xd2","\x90")},
	{hx::fsInt,(int)offsetof(MapGen_obj,activeX),HX_HCSTRING("activeX","\xd2","\x4b","\x33","\x67")},
	{hx::fsInt,(int)offsetof(MapGen_obj,activeY),HX_HCSTRING("activeY","\xd3","\x4b","\x33","\x67")},
	{hx::fsInt,(int)offsetof(MapGen_obj,minHeight),HX_HCSTRING("minHeight","\x19","\x07","\x94","\x5b")},
	{hx::fsInt,(int)offsetof(MapGen_obj,maxHeight),HX_HCSTRING("maxHeight","\xab","\x19","\xd7","\x31")},
	{hx::fsFloat,(int)offsetof(MapGen_obj,Range),HX_HCSTRING("Range","\x9d","\x15","\x4d","\x77")},
	{hx::fsInt,(int)offsetof(MapGen_obj,maxRange),HX_HCSTRING("maxRange","\x79","\xf8","\x3c","\x8e")},
	{hx::fsFloat,(int)offsetof(MapGen_obj,cameraX),HX_HCSTRING("cameraX","\x13","\x8a","\x31","\xe3")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(MapGen_obj,enemies),HX_HCSTRING("enemies","\xa6","\x68","\x0e","\xd3")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(MapGen_obj,enemieShots),HX_HCSTRING("enemieShots","\xcc","\xf3","\x26","\x8b")},
	{hx::fsObject /*::Sheep*/ ,(int)offsetof(MapGen_obj,sheep),HX_HCSTRING("sheep","\x9b","\xe2","\x1f","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("collGrounds","\x40","\x21","\xb5","\xa9"),
	HX_HCSTRING("visGrounds","\x0c","\xd2","\x47","\x2d"),
	HX_HCSTRING("debugFus","\xb1","\x27","\xd2","\x90"),
	HX_HCSTRING("activeX","\xd2","\x4b","\x33","\x67"),
	HX_HCSTRING("activeY","\xd3","\x4b","\x33","\x67"),
	HX_HCSTRING("minHeight","\x19","\x07","\x94","\x5b"),
	HX_HCSTRING("maxHeight","\xab","\x19","\xd7","\x31"),
	HX_HCSTRING("Range","\x9d","\x15","\x4d","\x77"),
	HX_HCSTRING("maxRange","\x79","\xf8","\x3c","\x8e"),
	HX_HCSTRING("cameraX","\x13","\x8a","\x31","\xe3"),
	HX_HCSTRING("enemies","\xa6","\x68","\x0e","\xd3"),
	HX_HCSTRING("enemieShots","\xcc","\xf3","\x26","\x8b"),
	HX_HCSTRING("sheep","\x9b","\xe2","\x1f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("updateWorld","\x89","\xff","\xfc","\xb3"),
	HX_HCSTRING("createGround","\xa3","\x62","\x7d","\x3e"),
	HX_HCSTRING("debugFu","\x82","\x0a","\x57","\x5b"),
	HX_HCSTRING("createRandomVis_","\x3e","\xc8","\x51","\xf3"),
	HX_HCSTRING("createRandomVisRec","\xcf","\x4e","\x79","\xc1"),
	HX_HCSTRING("addDownEnemy","\x25","\x08","\xe5","\x85"),
	HX_HCSTRING("addFlyEnemy","\x16","\xf4","\x5a","\xeb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MapGen_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MapGen_obj::__mClass,"__mClass");
};

#endif

hx::Class MapGen_obj::__mClass;

void MapGen_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("MapGen","\x74","\x2b","\x97","\xed");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MapGen_obj >;
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

