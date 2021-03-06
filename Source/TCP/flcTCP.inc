{******************************************************************************}
{                                                                              }
{   Library:          Fundamentals 5.00                                        }
{   File name:        flcTCP.inc                                               }
{   Description:      TCP library conditional defines.                         }
{                                                                              }
{******************************************************************************}

{$INCLUDE ..\flcInclude.inc}

{.DEFINE TLS}

{$IFDEF DEBUG}
{$IFDEF TEST}
  {.DEFINE DEBUG_TCP}
{$ENDIF}
{$ENDIF}

{$IFDEF DEBUG_TCP}
  {$DEFINE TCP_DEBUG}
  {$DEFINE TCP_DEBUG_DATA}
  {$DEFINE TCP_DEBUG_TLS}
  {$DEFINE TCP_DEBUG_SOCKET}
  {$DEFINE TCP_DEBUG_CONNECTION}
  {$DEFINE TCP_DEBUG_THREAD}
  {$DEFINE TCP_DEBUG_WEBSOCKET}
{$ENDIF}

{.DEFINE TCPCLIENT_SOCKS}

{$IFDEF TLS}
  {$DEFINE TCPCLIENT_TLS}
  {$DEFINE TCPSERVER_TLS}
{$ENDIF}

{.DEFINE TCPCLIENT_WEBSOCKET}

{$IFDEF DELPHI5_DOWN}
  {$UNDEF TCPCLIENT_TLS}
  {$UNDEF TCPSERVER_TLS}
{$ENDIF}

