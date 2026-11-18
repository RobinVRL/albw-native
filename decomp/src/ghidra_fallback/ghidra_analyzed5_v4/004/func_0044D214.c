#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0058D6C0(int param_1);
extern int func_0058D888(int param_1);
extern int func_0058DAF8(int param_1);
extern int func_0058DC24(int param_1);
extern int func_0066CD9C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0044d304;
extern float DAT_0044d308;

// USA 0044D214 <- EU 0044D1EC (Ghidra, non-matching)
// GLOBAL DAT_0044d304 int *
// GLOBAL DAT_0044d308 float

undefined4 func_0044D214(int param_1)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  
  piVar1 = DAT_0044d304;
  bVar2 = func_0058DAF8(*DAT_0044d304);
  if (bVar2 == 0) goto LAB_0044d290;
  cVar3 = func_0058D6C0(*piVar1);
  *(char *)(param_1 + 0x108) = cVar3;
  if (cVar3 == '\x01') {
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x82) = 10;
LAB_0044d280:
    *(undefined2 *)(param_1 + 0x80) = 0;
  }
  else if (cVar3 == '\x02') {
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x82) = 0xb;
    *(undefined2 *)(param_1 + 0x80) = 0;
  }
  else if (cVar3 == '\x03') {
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x82) = 0xc;
    goto LAB_0044d280;
  }
  func_002317C0((undefined2 *)(param_1 + 0x80),DAT_0044d308);
LAB_0044d290:
  iVar4 = func_0058D888(*piVar1);
  if (iVar4 != 0) {
    bVar2 = func_0058DC24(*piVar1);
    if (bVar2 == 0) {
      cVar3 = *(char *)(*(int *)(param_1 + 300) + 0x15c);
      if ((cVar3 != '\x02') && (cVar3 != '\x01')) {
        return func_0066CD9C((undefined4 *)(param_1 + 0xb0),8);
      }
      return func_0066CD9C((undefined4 *)(param_1 + 0xb0),6);
    }
    func_0066CD9C((undefined4 *)(param_1 + 0xb0),10);
  }
  return 0;
}

