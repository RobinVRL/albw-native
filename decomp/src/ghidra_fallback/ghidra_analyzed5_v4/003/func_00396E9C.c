#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);
extern int func_00111A64(uint *param_1);
extern int func_00396AC0(int param_1,undefined4 param_2);
extern int func_00543170(int param_1);
extern int func_0058A7D4(void);
extern int DAT_00396fb0;
extern float DAT_00396fb4;
extern float DAT_00396fb8;
extern int DAT_00396fbc;
extern int DAT_00396fc0;

// USA 00396E9C <- EU 00396E78 (Ghidra, non-matching)
// GLOBAL DAT_00396fb0 int
// GLOBAL DAT_00396fb4 float
// GLOBAL DAT_00396fb8 float
// GLOBAL DAT_00396fbc int
// GLOBAL DAT_00396fc0 int

undefined4 func_00396E9C(int *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  longlong lVar6;
  
  iVar1 = func_00543170(*param_1);
  if (iVar1 != 0) {
    return 0;
  }
  lVar6 = func_001104E4((int)*(short *)(DAT_00396fb0 + *param_1),
                        (int)*(char *)(*(int *)(*param_1 + 0x8bc) + 8));
  fVar5 = (float)VectorSignedToFloat((int)lVar6,(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = DAT_00396fb4 - fVar5;
  puVar2 = (uint *)func_0058A7D4();
  uVar3 = func_00111A64(puVar2);
  if ((int)((ulonglong)uVar3 * 0x65 >> 0x20) < (int)(fVar5 * DAT_00396fb8)) {
    if ((*(char *)(DAT_00396fbc + *param_1) != '\x11') &&
       (*(char *)(DAT_00396fc0 + *param_1) != '\x11')) {
      return 0;
    }
    puVar2 = (uint *)func_0058A7D4();
    uVar3 = func_00111A64(puVar2);
    iVar1 = *param_1;
    uVar4 = (uint)*(byte *)(DAT_00396fbc + iVar1);
    if ((uVar4 == 0x11) && (*(char *)(DAT_00396fc0 + iVar1) == '\x11')) {
      if ((uint)((ulonglong)uVar3 * 0x65 >> 0x20) < 0x32) {
        func_00396AC0((int)param_1,0x11);
        return 1;
      }
    }
    else if (uVar4 != 0x11) {
      func_00396AC0((int)param_1,(uint)*(byte *)(iVar1 + 0x1489));
      return 1;
    }
    func_00396AC0((int)param_1,uVar4);
    return 1;
  }
  return 0;
}

