#include "ghidra_types.h"

extern int func_0040E8EC(void);
extern int func_0040EA34(uint *param_1);
extern int func_0040F2E4(void);
extern int func_0040F528(undefined4 *param_1);
extern int func_00412BB4(void);
extern int func_00412F58(void);
extern int func_00412FB4(int param_1);
extern int func_00414FF0(void);
extern int func_004155F0(int param_1);
extern int func_004156BC(int param_1);
extern int func_004156E8(int param_1);
extern int func_00417E24(void);
extern int func_00417FC4(uint *param_1);
extern int func_0041884C(char *param_1);
extern int func_00419924(void);
extern int func_00419BB0(char *param_1);
extern int func_006766D8(int param_1);
extern int DAT_004085c0;
extern char *DAT_004085c4;

// USA 0040855C <- EU 0040853C (Ghidra, non-matching)
// GLOBAL DAT_004085c0 int
// GLOBAL DAT_004085c4 char *

void func_0040855C(void)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  iVar1 = DAT_004085c0;
  if (*(char *)(DAT_004085c0 + 1) != '\0') {
    func_0040F2E4();
    puVar2 = func_0040E8EC();
    func_0040EA34(puVar2);
    iVar3 = func_0040F2E4();
    func_006766D8(iVar3);
    puVar4 = func_00414FF0();
    func_004156BC((int)puVar4);
    puVar4 = func_00414FF0();
    func_004155F0((int)puVar4);
    puVar2 = func_00417E24();
    func_00417FC4(puVar2);
    pcVar5 = func_00419924();
    func_00419BB0(pcVar5);
    func_0041884C(DAT_004085c4);
    func_0040F528((undefined4 *)(iVar1 + 8));
    puVar4 = func_00414FF0();
    func_004156E8((int)puVar4);
    iVar3 = func_00412BB4();
    func_00412FB4(iVar3);
    iVar3 = func_00412F58();
    func_00412FB4(iVar3);
    *(undefined1 *)(iVar1 + 2) = 0;
    *(undefined1 *)(iVar1 + 1) = 0;
  }
  return;
}

