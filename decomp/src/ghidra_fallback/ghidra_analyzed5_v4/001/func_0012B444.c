#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004FB064(int param_1);
extern int func_00521058(void);
extern int func_00521078(int param_1);
extern int func_0058A8F0(int param_1);
extern int func_00656B60(undefined4 *param_1,undefined1 param_2);
extern undefined DAT_0012b4c8;
extern int DAT_0012b4e0;
extern char s_cf_0012b4cc[];
extern undefined4 _DAT_0012b4c8;

// USA 0012B444 <- EU 0012B444 (Ghidra, non-matching)
// GLOBAL DAT_0012b4c8 undefined
// GLOBAL DAT_0012b4e0 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_0012B444(int *param_1)

{
  bool bVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  func_004FB064((int)param_1);
  param_1[0xf8] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf8]) - ALBW_AS_F32(_DAT_0012b4c8)));
  iVar2 = func_0058A8F0((int)param_1);
  if ((iVar2 != 0) && (bVar1 = func_00521078((int)param_1), bVar1)) {
    iVar2 = func_00521058();
    param_1[0x23e] = iVar2;
    func_00656B60(param_1 + 0x22f,0);
    local_c = s_cf_0012b4cc;
    local_10 = DAT_0012b4e0;
    func_00150A84(param_1,&local_10,0);
  }
  return;
}

