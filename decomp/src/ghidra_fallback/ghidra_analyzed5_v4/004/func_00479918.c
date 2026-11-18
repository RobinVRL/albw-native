#include "ghidra_types.h"

extern int func_00167E04(int param_1,int param_2,uint param_3);
extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002BED00(int param_1);
extern int func_00579CEC(int param_1);
extern float DAT_004799c4;

// USA 00479918 <- EU 004798F0 (Ghidra, non-matching)
// GLOBAL DAT_004799c4 float

/* WARNING: Removing unreachable block (ram,0x00479998) */
/* WARNING: Removing unreachable block (ram,0x0047999c) */

void func_00479918(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  float fparam_0;
  
  fparam_0 = DAT_004799c4;
  *(float *)(param_1 + 0x29c) = DAT_004799c4;
  func_002BED00(*(int *)(param_1 + 0x1fc));
  iVar2 = func_00579CEC(param_1);
  if (iVar2 != 0) {
    if (*(char *)(*(int *)(param_1 + 0x1f8) + 0xe4) == -1) {
      *(undefined1 *)(param_1 + 0x295) = 1;
      cVar1 = *(char *)(param_1 + 0x229);
      bVar3 = cVar1 == '\0';
      if (bVar3) {
        cVar1 = *(char *)(param_1 + 0x22a);
      }
      if (bVar3 && cVar1 == '\0') {
        return;
      }
      if (*(char *)(param_1 + 0x294) != '\x03') {
        func_002317C0((undefined2 *)(param_1 + 0x278),fparam_0);
        return;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x295) = 0;
      if ((*(char *)(param_1 + 0x229) == '\0') && (*(char *)(param_1 + 0x22a) == '\0')) {
        return;
      }
    }
    func_00231448(param_1 + 0x278);
    func_00167E04(*(int *)(param_1 + 0x238),*(int *)(param_1 + 0x290),0);
  }
  return;
}

