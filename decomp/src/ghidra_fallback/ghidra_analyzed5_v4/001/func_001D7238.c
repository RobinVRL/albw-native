#include "ghidra_types.h"

extern int func_00255B48(int param_1,int param_2,int param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_00547514(int param_1);
extern int *DAT_001d7328;
extern int DAT_001d733c;
extern int *DAT_001d7340;
extern undefined DAT_001d7344;
extern char s_SE_PL_RUPEE_GET_001d732c[];

// USA 001D7238 <- EU 001D7238 (Ghidra, non-matching)
// GLOBAL DAT_001d7328 int *
// GLOBAL DAT_001d733c int
// GLOBAL DAT_001d7340 int *
// GLOBAL DAT_001d7344 undefined
// GLOBAL s_SE_PL_RUPEE_GET_001d732c string

undefined4 func_001D7238(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  #define aiStack_18 ((int *)(albw_frame + 0x8))
  cVar1 = *(char *)(param_1 + 0x514);
  if (cVar1 == '\x03' || cVar1 == '\x05') {
    return 0;
  }
  uVar3 = (uint)*(byte *)(param_1 + 0x515);
  if ((uVar3 == 4 || uVar3 == 5) && (cVar1 == '\0' && param_2 == 5)) {
    return 0;
  }
  if (uVar3 == 4 || uVar3 == 5) {
    if (cVar1 == '\0') {
      if (*(short *)(param_1 + 0x2c) == 0) goto LAB_001d7310;
    }
    else if (cVar1 == '\a') {
LAB_001d7310:
      if (*(char *)(param_1 + 0x4d8) == '\b') {
        return 0;
      }
      *(undefined1 *)(param_1 + 0x52c) = 1;
      return 0;
    }
  }
  iVar2 = func_00255B48(*DAT_001d7328,*(int *)(param_1 + 0x510),uVar3);
  if (iVar2 == 0) {
    return 0;
  }
  local_1c = s_SE_PL_RUPEE_GET_001d732c;
  local_20 = DAT_001d733c;
  func_004EA104(*DAT_001d7340,&local_20,0);
  func_00547514(param_1 + 4);
  if (*(int *)(param_1 + 0x344) != 0) {
    func_004A1B9C(aiStack_18,*(int *)(param_1 + 0x344),(uint *)&DAT_001d7344);
  }
  *(undefined1 *)(param_1 + 0x2d7) = 1;
  return 1;
}

