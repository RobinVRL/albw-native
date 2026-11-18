#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_00231524(int param_1);
extern int func_0045F6B0(int param_1,int param_2,undefined1 param_3);
extern int func_00522958(int param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0066BFFC(undefined4 *param_1,char param_2);
extern int *DAT_0042363c;
extern int *DAT_00423640;
extern undefined DAT_00423644;
extern int DAT_00423660;
extern char s__ASE_S_ITEM_SHORT_CUT_OFF_00423646[];
extern char s_cf_00423646[];
extern undefined4 _DAT_00423644;

// USA 00423520 <- EU 00423500 (Ghidra, non-matching)
// GLOBAL DAT_0042363c int *
// GLOBAL DAT_00423640 int *
// GLOBAL DAT_00423644 undefined
// GLOBAL DAT_00423660 int
// GLOBAL s_cf_00423646 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00423520(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  piVar1 = DAT_0042363c;
  iVar2 = func_00522958(*DAT_0042363c);
  if (iVar2 == 0) {
    func_002313DC(param_1 + 200);
    func_002313DC(param_1 + 0xd4);
    func_0066BFFC((undefined4 *)(param_1 + 0x38),'\x03');
    local_14 = s__ASE_S_ITEM_SHORT_CUT_OFF_00423646 + 2;
    local_18 = DAT_00423660;
    func_00533078(param_1,&local_18,0);
  }
  else if (*(short *)(param_1 + 0xf4) < 0x1e) {
    *(short *)(param_1 + 0xf4) = *(short *)(param_1 + 0xf4) + 1;
  }
  else {
    iVar2 = *(int *)(*DAT_00423640 + 0xe8);
    if (iVar2 != 0) {
      fVar3 = *(float *)(*piVar1 + 0x14) - *(float *)(param_1 + 0xf0);
      if (_DAT_00423644 <= (int)ALBW_AS_U32(fVar3)) {
        func_0045F6B0(iVar2,1,0);
        func_00231524(param_1 + 200);
        return func_002313DC(param_1 + 0xd4);
      }
      if ((uint)ALBW_AS_U32(fVar3) < 0xc1400000) {
        func_0045F6B0(iVar2,0,0);
        func_002313DC(param_1 + 200);
        return func_002313DC(param_1 + 0xd4);
      }
      func_002313DC(param_1 + 200);
      func_00231524(param_1 + 0xd4);
      return func_0045F6B0(iVar2,2,0);
    }
  }
  return 0;
}

