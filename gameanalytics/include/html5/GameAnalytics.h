#pragma  once

#ifdef __cplusplus
extern "C"
{
#endif
    void js_configureAvailableCustomDimensions01(const char *list);
    void js_configureAvailableCustomDimensions02(const char *list);
    void js_configureAvailableCustomDimensions03(const char *list);
    void js_configureAvailableResourceCurrencies(const char *list);
    void js_configureAvailableResourceItemTypes(const char *list);
    void js_configureSdkGameEngineVersion(const char *version);
    void js_configureGameEngineVersion(const char *version);
    void js_configureBuild(const char *build);
    void js_configureUserId(const char *userId);
    void js_initialize(const char *gamekey, const char *gamesecret);
    void js_setCustomDimension01(const char *customDimension);
    void js_setCustomDimension02(const char *customDimension);
    void js_setCustomDimension03(const char *customDimension);
    void js_setGlobalCustomEventFields(const char *fields);
    void js_addBusinessEvent(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType, const char *fields, bool mergeFields);
    void js_addResourceEvent(int flowType, const char *currency, float amount, const char *itemType, const char *itemId, const char *fields, bool mergeFields);
    void js_addProgressionEvent(int progressionStatus, const char *progression01, const char *progression02, const char *progression03, const char *fields, bool mergeFields);
    void js_addProgressionEventWithScore(int progressionStatus, const char *progression01, const char *progression02, const char *progression03, int score, const char *fields, bool mergeFields);
    void js_addDesignEvent(const char *eventId, const char *fields, bool mergeFields);
    void js_addDesignEventWithValue(const char *eventId, float value, const char *fields, bool mergeFields);
    void js_addErrorEvent(int severity, const char *message, const char *fields, bool mergeFields);
    void js_setEnabledInfoLog(bool enabled);
    void js_setEnabledVerboseLog(bool enabled);
    void js_setManualSessionHandling(bool enabled);
    void js_setEventSubmission(bool enabled);
    void js_startSession();
    void js_endSession();
    void js_onStop();
    const char* js_getRemoteConfigsValueAsString(const char *key);
    const char* js_getRemoteConfigsValueAsStringWithDefaultValue(const char *key, const char *defaultValue);
    bool js_isRemoteConfigsReady();
    const char* js_getRemoteConfigsContentAsString();
#ifdef __cplusplus
}
#endif
