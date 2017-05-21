#include "base/ccConfig.h"
#ifndef __cocos2dx_spine_h__
#define __cocos2dx_spine_h__

#include "jsapi.h"
#include "jsfriendapi.h"

extern JSClass  *jsb_spine_SkeletonRenderer_class;
extern JSObject *jsb_spine_SkeletonRenderer_prototype;

bool js_cocos2dx_spine_SkeletonRenderer_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_spine_SkeletonRenderer_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_spine_SkeletonRenderer(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_spine(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_spine_SkeletonRenderer_setTimeScale(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonRenderer_getDebugSlotsEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonRenderer_setAttachment(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonRenderer_setBonesToSetupPose(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonRenderer_setDebugSlotsEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonRenderer_initWithJsonFile(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonRenderer_setSlotsToSetupPose(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonRenderer_initWithBinaryFile(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonRenderer_setToSetupPose(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonRenderer_getBlendFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonRenderer_updateWorldTransform(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonRenderer_initialize(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonRenderer_setDebugBonesEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonRenderer_getDebugBonesEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonRenderer_getTimeScale(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonRenderer_setBlendFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonRenderer_setSkin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonRenderer_getSkeleton(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonRenderer_drawDebug(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonRenderer_createWithFile(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonRenderer_SkeletonRenderer(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_spine_SkeletonAnimation_class;
extern JSObject *jsb_spine_SkeletonAnimation_prototype;

bool js_cocos2dx_spine_SkeletonAnimation_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_spine_SkeletonAnimation_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_spine_SkeletonAnimation(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_spine(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_spine_SkeletonAnimation_findAnimation(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonAnimation_setMix(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonAnimation_setDisposeListener(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonAnimation_setEndListener(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonAnimation_getState(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonAnimation_setCompleteListener(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonAnimation_setEventListener(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonAnimation_clearTrack(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonAnimation_setInterruptListener(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonAnimation_clearTracks(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonAnimation_setStartListener(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonAnimation_createWithBinaryFile(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonAnimation_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonAnimation_createWithJsonFile(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonAnimation_SkeletonAnimation(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_spine_SkeletonCache_class;
extern JSObject *jsb_spine_SkeletonCache_prototype;

bool js_cocos2dx_spine_SkeletonCache_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_spine_SkeletonCache_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_spine_SkeletonCache(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_spine(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_spine_SkeletonCache_removeAll(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonCache_removeUnusedAssets(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonCache_getInstance(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_spine_SkeletonCache_SkeletonCache(JSContext *cx, uint32_t argc, jsval *vp);

#endif // __cocos2dx_spine_h__
