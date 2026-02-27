
#include "constants/charcode.h"
#include "charcode.h"
#include "field_script_context.h"
#include "script_manager.h"
#include "string_gf.h"
#include "string_template.h"

static void NitroStaticInit(void);

static void NitroStaticInit(void)
{}

BOOL ScrCmd_BufferPlayerNameNew(ScriptContext *ctx)
{
    FieldSystem *fieldSystem = ctx->fieldSystem;
    StringTemplate **strTemplate = FieldSystem_GetScriptMemberPtr(fieldSystem, SCRIPT_MANAGER_STR_TEMPLATE);
    u8 templateArg = ScriptContext_ReadByte(ctx);

    charcode_t newName[] = {
        CHAR_D,
        CHAR_U,
        CHAR_M,
        CHAR_M,
        CHAR_Y,
        CHAR_EOS,
    };
    String *str = String_Init(16, HEAP_ID_FIELD2);
    String_CopyChars(str, newName);

    StringTemplate_SetString(*strTemplate, templateArg, str, 0, FALSE, 0);
    String_Free(str);

    return FALSE;
}
