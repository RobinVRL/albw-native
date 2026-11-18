#include "ghidra_types.h"

extern int func_0014FB58(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_002ECA34(int param_1);
extern int func_002F4260(int param_1,int param_2);
extern int func_00520FC0(void);
extern undefined4 func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int DAT_002e74b0;
extern float DAT_002e74b4;

// USA 002E7408 <- EU 002E73E4 (Ghidra, non-matching)
// GLOBAL DAT_002e74b0 int
// GLOBAL DAT_002e74b4 float

undefined4 func_002E7408(int param_1)

{
  float *pfVar1;
  int iVar2;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define fStack_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  pfVar1 = (float *)func_00520FC0();
  local_20 = *pfVar1;
  fStack_1c = pfVar1[1];
  local_18 = pfVar1[2];
  fparam_0 = DAT_002e74b4;
  func_0014FB58(param_1,&local_20,DAT_002e74b0,DAT_002e74b4);
  if (*(uint *)(param_1 + 0xb0c) < *(uint *)(param_1 + 0xb10)) {
    *(uint *)(param_1 + 0xb0c) = *(uint *)(param_1 + 0xb0c) + 1;
  }
  else {
    func_00520FC0();
    if (*(char *)(param_1 + 0xd45) == '\x01') {
      if (*(char *)(param_1 + 0xd48) == '\x02') {
        iVar2 = 0x11;
      }
      else {
        iVar2 = 0xe;
      }
      goto LAB_002e7468;
    }
    iVar2 = func_002F4260(param_1,4);
    if (iVar2 != 0x23) goto LAB_002e7468;
  }
  if (*(char *)(param_1 + 0xd3d) == '\0') {
    return 0;
  }
  iVar2 = func_002ECA34(param_1);
LAB_002e7468:
  return func_006640EC((undefined4 *)(param_1 + 0x8c8),(char)iVar2,fparam_0);
}

