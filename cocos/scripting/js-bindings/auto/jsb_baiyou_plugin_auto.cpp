#include "scripting/js-bindings/auto/jsb_baiyou_plugin_auto.hpp"
#include "scripting/js-bindings/manual/cocos2d_specifics.hpp"
#include "baiyou/BaiyouPlugin.h"

JSClass  *jsb_baiyou_BaiyouPlugin_class;
JS::PersistentRootedObject *jsb_baiyou_BaiyouPlugin_prototype;

bool js_baiyou_plugin_BaiyouPlugin_getBundleVersion(JSContext *cx, uint32_t argc, JS::Value *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true; CC_UNUSED_PARAM(ok);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(cx, obj);
    baiyou::BaiyouPlugin* cobj = (baiyou::BaiyouPlugin *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_baiyou_plugin_BaiyouPlugin_getBundleVersion : Invalid Native Object");
    if (argc == 0) {
        std::string ret = cobj->getBundleVersion();
        JS::RootedValue jsret(cx);
        ok &= std_string_to_jsval(cx, ret, &jsret);
        JSB_PRECONDITION2(ok, cx, false, "js_baiyou_plugin_BaiyouPlugin_getBundleVersion : error parsing return value");
        args.rval().set(jsret);
        return true;
    }

    JS_ReportErrorUTF8(cx, "js_baiyou_plugin_BaiyouPlugin_getBundleVersion : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_baiyou_plugin_BaiyouPlugin_MessageBox(JSContext *cx, uint32_t argc, JS::Value *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true; CC_UNUSED_PARAM(ok);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(cx, obj);
    baiyou::BaiyouPlugin* cobj = (baiyou::BaiyouPlugin *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_baiyou_plugin_BaiyouPlugin_MessageBox : Invalid Native Object");
    if (argc == 2) {
        std::string arg0;
        std::string arg1;
        ok &= jsval_to_std_string(cx, args.get(0), &arg0);
        ok &= jsval_to_std_string(cx, args.get(1), &arg1);
        JSB_PRECONDITION2(ok, cx, false, "js_baiyou_plugin_BaiyouPlugin_MessageBox : Error processing arguments");
        cobj->MessageBox(arg0, arg1);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportErrorUTF8(cx, "js_baiyou_plugin_BaiyouPlugin_MessageBox : wrong number of arguments: %d, was expecting %d", argc, 2);
    return false;
}
bool js_baiyou_plugin_BaiyouPlugin_openURL(JSContext *cx, uint32_t argc, JS::Value *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true; CC_UNUSED_PARAM(ok);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(cx, obj);
    baiyou::BaiyouPlugin* cobj = (baiyou::BaiyouPlugin *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_baiyou_plugin_BaiyouPlugin_openURL : Invalid Native Object");
    if (argc == 1) {
        std::string arg0;
        ok &= jsval_to_std_string(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_baiyou_plugin_BaiyouPlugin_openURL : Error processing arguments");
        cobj->openURL(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportErrorUTF8(cx, "js_baiyou_plugin_BaiyouPlugin_openURL : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_baiyou_plugin_BaiyouPlugin_unScheduleAllLocalNotification(JSContext *cx, uint32_t argc, JS::Value *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(cx, obj);
    baiyou::BaiyouPlugin* cobj = (baiyou::BaiyouPlugin *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_baiyou_plugin_BaiyouPlugin_unScheduleAllLocalNotification : Invalid Native Object");
    if (argc == 0) {
        cobj->unScheduleAllLocalNotification();
        args.rval().setUndefined();
        return true;
    }

    JS_ReportErrorUTF8(cx, "js_baiyou_plugin_BaiyouPlugin_unScheduleAllLocalNotification : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_baiyou_plugin_BaiyouPlugin_scheduleLocalNotification(JSContext *cx, uint32_t argc, JS::Value *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true; CC_UNUSED_PARAM(ok);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(cx, obj);
    baiyou::BaiyouPlugin* cobj = (baiyou::BaiyouPlugin *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_baiyou_plugin_BaiyouPlugin_scheduleLocalNotification : Invalid Native Object");
    if (argc == 3) {
        std::string arg0;
        std::string arg1;
        int arg2 = 0;
        ok &= jsval_to_std_string(cx, args.get(0), &arg0);
        ok &= jsval_to_std_string(cx, args.get(1), &arg1);
        ok &= jsval_to_int32(cx, args.get(2), (int32_t *)&arg2);
        JSB_PRECONDITION2(ok, cx, false, "js_baiyou_plugin_BaiyouPlugin_scheduleLocalNotification : Error processing arguments");
        cobj->scheduleLocalNotification(arg0, arg1, arg2);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportErrorUTF8(cx, "js_baiyou_plugin_BaiyouPlugin_scheduleLocalNotification : wrong number of arguments: %d, was expecting %d", argc, 3);
    return false;
}
bool js_baiyou_plugin_BaiyouPlugin_getBundleId(JSContext *cx, uint32_t argc, JS::Value *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true; CC_UNUSED_PARAM(ok);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(cx, obj);
    baiyou::BaiyouPlugin* cobj = (baiyou::BaiyouPlugin *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_baiyou_plugin_BaiyouPlugin_getBundleId : Invalid Native Object");
    if (argc == 0) {
        std::string ret = cobj->getBundleId();
        JS::RootedValue jsret(cx);
        ok &= std_string_to_jsval(cx, ret, &jsret);
        JSB_PRECONDITION2(ok, cx, false, "js_baiyou_plugin_BaiyouPlugin_getBundleId : error parsing return value");
        args.rval().set(jsret);
        return true;
    }

    JS_ReportErrorUTF8(cx, "js_baiyou_plugin_BaiyouPlugin_getBundleId : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_baiyou_plugin_BaiyouPlugin_init(JSContext *cx, uint32_t argc, JS::Value *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true; CC_UNUSED_PARAM(ok);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(cx, obj);
    baiyou::BaiyouPlugin* cobj = (baiyou::BaiyouPlugin *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_baiyou_plugin_BaiyouPlugin_init : Invalid Native Object");
    if (argc == 0) {
        bool ret = cobj->init();
        JS::RootedValue jsret(cx);
        jsret = JS::BooleanValue(ret);
        JSB_PRECONDITION2(ok, cx, false, "js_baiyou_plugin_BaiyouPlugin_init : error parsing return value");
        args.rval().set(jsret);
        return true;
    }

    JS_ReportErrorUTF8(cx, "js_baiyou_plugin_BaiyouPlugin_init : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_baiyou_plugin_BaiyouPlugin_setIdleTimerDisabled(JSContext *cx, uint32_t argc, JS::Value *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true; CC_UNUSED_PARAM(ok);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(cx, obj);
    baiyou::BaiyouPlugin* cobj = (baiyou::BaiyouPlugin *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_baiyou_plugin_BaiyouPlugin_setIdleTimerDisabled : Invalid Native Object");
    if (argc == 1) {
        bool arg0;
        ok &= jsval_to_bool(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_baiyou_plugin_BaiyouPlugin_setIdleTimerDisabled : Error processing arguments");
        cobj->setIdleTimerDisabled(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportErrorUTF8(cx, "js_baiyou_plugin_BaiyouPlugin_setIdleTimerDisabled : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_baiyou_plugin_BaiyouPlugin_getProperty(JSContext *cx, uint32_t argc, JS::Value *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true; CC_UNUSED_PARAM(ok);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(cx, obj);
    baiyou::BaiyouPlugin* cobj = (baiyou::BaiyouPlugin *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_baiyou_plugin_BaiyouPlugin_getProperty : Invalid Native Object");
    if (argc == 1) {
        std::string arg0;
        ok &= jsval_to_std_string(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_baiyou_plugin_BaiyouPlugin_getProperty : Error processing arguments");
        std::string ret = cobj->getProperty(arg0);
        JS::RootedValue jsret(cx);
        ok &= std_string_to_jsval(cx, ret, &jsret);
        JSB_PRECONDITION2(ok, cx, false, "js_baiyou_plugin_BaiyouPlugin_getProperty : error parsing return value");
        args.rval().set(jsret);
        return true;
    }

    JS_ReportErrorUTF8(cx, "js_baiyou_plugin_BaiyouPlugin_getProperty : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_baiyou_plugin_BaiyouPlugin_getUUID(JSContext *cx, uint32_t argc, JS::Value *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true; CC_UNUSED_PARAM(ok);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(cx, obj);
    baiyou::BaiyouPlugin* cobj = (baiyou::BaiyouPlugin *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_baiyou_plugin_BaiyouPlugin_getUUID : Invalid Native Object");
    if (argc == 0) {
        std::string ret = cobj->getUUID();
        JS::RootedValue jsret(cx);
        ok &= std_string_to_jsval(cx, ret, &jsret);
        JSB_PRECONDITION2(ok, cx, false, "js_baiyou_plugin_BaiyouPlugin_getUUID : error parsing return value");
        args.rval().set(jsret);
        return true;
    }

    JS_ReportErrorUTF8(cx, "js_baiyou_plugin_BaiyouPlugin_getUUID : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_baiyou_plugin_BaiyouPlugin_restart(JSContext *cx, uint32_t argc, JS::Value *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(cx, obj);
    baiyou::BaiyouPlugin* cobj = (baiyou::BaiyouPlugin *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_baiyou_plugin_BaiyouPlugin_restart : Invalid Native Object");
    if (argc == 0) {
        cobj->restart();
        args.rval().setUndefined();
        return true;
    }

    JS_ReportErrorUTF8(cx, "js_baiyou_plugin_BaiyouPlugin_restart : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_baiyou_plugin_BaiyouPlugin_getDeviceInfo(JSContext *cx, uint32_t argc, JS::Value *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true; CC_UNUSED_PARAM(ok);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(cx, obj);
    baiyou::BaiyouPlugin* cobj = (baiyou::BaiyouPlugin *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_baiyou_plugin_BaiyouPlugin_getDeviceInfo : Invalid Native Object");
    if (argc == 0) {
        std::string ret = cobj->getDeviceInfo();
        JS::RootedValue jsret(cx);
        ok &= std_string_to_jsval(cx, ret, &jsret);
        JSB_PRECONDITION2(ok, cx, false, "js_baiyou_plugin_BaiyouPlugin_getDeviceInfo : error parsing return value");
        args.rval().set(jsret);
        return true;
    }

    JS_ReportErrorUTF8(cx, "js_baiyou_plugin_BaiyouPlugin_getDeviceInfo : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_baiyou_plugin_BaiyouPlugin_GetAnySDKUserInitFinished(JSContext *cx, uint32_t argc, JS::Value *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true; CC_UNUSED_PARAM(ok);
    if (argc == 0) {

        bool ret = baiyou::BaiyouPlugin::GetAnySDKUserInitFinished();
        JS::RootedValue jsret(cx, JS::NullHandleValue);
        jsret = JS::BooleanValue(ret);
        JSB_PRECONDITION2(ok, cx, false, "js_baiyou_plugin_BaiyouPlugin_GetAnySDKUserInitFinished : error parsing return value");
        args.rval().set(jsret);
        return true;
    }
    JS_ReportErrorUTF8(cx, "js_baiyou_plugin_BaiyouPlugin_GetAnySDKUserInitFinished : wrong number of arguments");
    return false;
}

bool js_baiyou_plugin_BaiyouPlugin_SetAnySDKUserInitFinished(JSContext *cx, uint32_t argc, JS::Value *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true; CC_UNUSED_PARAM(ok);
    if (argc == 1) {
        bool arg0;
        ok &= jsval_to_bool(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_baiyou_plugin_BaiyouPlugin_SetAnySDKUserInitFinished : Error processing arguments");
        baiyou::BaiyouPlugin::SetAnySDKUserInitFinished(arg0);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportErrorUTF8(cx, "js_baiyou_plugin_BaiyouPlugin_SetAnySDKUserInitFinished : wrong number of arguments");
    return false;
}

bool js_baiyou_plugin_BaiyouPlugin_getInstance(JSContext *cx, uint32_t argc, JS::Value *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true; CC_UNUSED_PARAM(ok);
    if (argc == 0) {

        auto ret = baiyou::BaiyouPlugin::getInstance();
        JS::RootedObject jsret(cx);
        JS::RootedObject proto(cx, jsb_baiyou_BaiyouPlugin_prototype->get());
        jsb_ref_get_or_create_jsobject(cx, ret, jsb_baiyou_BaiyouPlugin_class, proto, &jsret, "baiyou::BaiyouPlugin");
        args.rval().set(JS::ObjectOrNullValue(jsret));
        return true;
    }
    JS_ReportErrorUTF8(cx, "js_baiyou_plugin_BaiyouPlugin_getInstance : wrong number of arguments");
    return false;
}


void js_register_baiyou_plugin_BaiyouPlugin(JSContext *cx, JS::HandleObject global) {
    static const JSClassOps baiyou_BaiyouPlugin_classOps = {
        nullptr, nullptr, nullptr, nullptr,
        nullptr, nullptr, nullptr,
        nullptr,
        nullptr, nullptr, nullptr, nullptr
    };
    static JSClass baiyou_BaiyouPlugin_class = {
        "BaiyouPlugin",
        JSCLASS_HAS_PRIVATE,
        &baiyou_BaiyouPlugin_classOps
    };
    jsb_baiyou_BaiyouPlugin_class = &baiyou_BaiyouPlugin_class;

    static JSFunctionSpec funcs[] = {
        JS_FN("getBundleVersion", js_baiyou_plugin_BaiyouPlugin_getBundleVersion, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("MessageBox", js_baiyou_plugin_BaiyouPlugin_MessageBox, 2, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("openURL", js_baiyou_plugin_BaiyouPlugin_openURL, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("unScheduleAllLocalNotification", js_baiyou_plugin_BaiyouPlugin_unScheduleAllLocalNotification, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("scheduleLocalNotification", js_baiyou_plugin_BaiyouPlugin_scheduleLocalNotification, 3, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getBundleId", js_baiyou_plugin_BaiyouPlugin_getBundleId, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("init", js_baiyou_plugin_BaiyouPlugin_init, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setIdleTimerDisabled", js_baiyou_plugin_BaiyouPlugin_setIdleTimerDisabled, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getProperty", js_baiyou_plugin_BaiyouPlugin_getProperty, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getUUID", js_baiyou_plugin_BaiyouPlugin_getUUID, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("restart", js_baiyou_plugin_BaiyouPlugin_restart, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getDeviceInfo", js_baiyou_plugin_BaiyouPlugin_getDeviceInfo, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FS_END
    };

    static JSFunctionSpec st_funcs[] = {
        JS_FN("GetAnySDKUserInitFinished", js_baiyou_plugin_BaiyouPlugin_GetAnySDKUserInitFinished, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("SetAnySDKUserInitFinished", js_baiyou_plugin_BaiyouPlugin_SetAnySDKUserInitFinished, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getInstance", js_baiyou_plugin_BaiyouPlugin_getInstance, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FS_END
    };

    JS::RootedObject parent_proto(cx, nullptr);
    JS::RootedObject proto(cx, JS_InitClass(
        cx, global,
        parent_proto,
        jsb_baiyou_BaiyouPlugin_class,
        empty_constructor, 0,
        nullptr,
        funcs,
        nullptr,
        st_funcs));

    // add the proto and JSClass to the type->js info hash table
    js_type_class_t *typeClass = jsb_register_class<baiyou::BaiyouPlugin>(cx, jsb_baiyou_BaiyouPlugin_class, proto);
    jsb_baiyou_BaiyouPlugin_prototype = typeClass->proto;
    JS::RootedValue className(cx);
    std_string_to_jsval(cx, "BaiyouPlugin", &className);
    JS_SetProperty(cx, proto, "_className", className);
    JS_SetProperty(cx, proto, "__nativeObj", JS::TrueHandleValue);
    JS_SetProperty(cx, proto, "__is_ref", JS::TrueHandleValue);
}

void register_all_baiyou_plugin(JSContext* cx, JS::HandleObject obj) {
    // Get the ns
    JS::RootedObject ns(cx);
    get_or_create_js_obj(cx, obj, "baiyou", &ns);

    js_register_baiyou_plugin_BaiyouPlugin(cx, ns);
}

