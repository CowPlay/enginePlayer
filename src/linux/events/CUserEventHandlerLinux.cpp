/*
 * CUserEventHandlerLinux.cpp
 *
 *  Created on: Dec 3, 2012
 *      Author: developer08
 */
#include "CUserEventHandlerLinux.h"

#ifdef TARGET_OS_LINUX

#include "events/user/EUserKeys.h"
#include "events/user/IUserEvent.h"



#define XK_MISCELLANY
#include "X11/keysymdef.h"

#include "X11/Xlib.h"
#include "X11/XKBlib.h"
#include "X11/Xatom.h"

namespace irrgame
{

	namespace events
	{
		//! Default constructor
		CUserEventHandlerLinux::CUserEventHandlerLinux() :
				IUserEventHandler()
		{
			initKeyMap();
			initCursorsInfo();
			initKeyStates();
		}

		//! Destructor
		CUserEventHandlerLinux::~CUserEventHandlerLinux()
		{
		}

		void CUserEventHandlerLinux::initKeyMap()
		{
			KeyMap.insert(XK_BackSpace, EUK_BACKSPACE);
			//		KeyMap.insert(XK_Tab, KEY_TAB));
			//		KeyMap.insert(XK_Linefeed, 0)); // ???
			//		KeyMap.insert(XK_Clear, KEY_CLEAR));
			//		KeyMap.insert(XK_Return, KEY_RETURN));
			//		KeyMap.insert(XK_Pause, KEY_PAUSE));
			//		KeyMap.insert(XK_Scroll_Lock, KEY_SCROLL));
			//		KeyMap.insert(XK_Sys_Req, 0)); // ???
			//		KeyMap.insert(XK_Escape, KEY_ESCAPE));
			//		KeyMap.insert(XK_Insert, KEY_INSERT));
			//		KeyMap.insert(XK_Delete, KEY_DELETE));
			//		KeyMap.insert(XK_Home, KEY_HOME));
			//		KeyMap.insert(XK_Left, KEY_LEFT));
			//		KeyMap.insert(XK_Up, KEY_UP));
			//		KeyMap.insert(XK_Right, KEY_RIGHT));
			//		KeyMap.insert(XK_Down, KEY_DOWN));
			//		KeyMap.insert(XK_Prior, KEY_PRIOR));
			//		KeyMap.insert(XK_Page_Up, KEY_PRIOR));
			//		KeyMap.insert(XK_Next, KEY_NEXT));
			//		KeyMap.insert(XK_Page_Down, KEY_NEXT));
			//		KeyMap.insert(XK_End, KEY_END));
			//		KeyMap.insert(XK_Begin, KEY_HOME));
			//		KeyMap.insert(XK_Num_Lock, KEY_NUMLOCK));
			//		KeyMap.insert(XK_KP_Space, KEY_SPACE));
			//		KeyMap.insert(XK_KP_Tab, KEY_TAB));
			//		KeyMap.insert(XK_KP_Enter, KEY_RETURN));
			//		KeyMap.insert(XK_KP_F1, KEY_F1));
			//		KeyMap.insert(XK_KP_F2, KEY_F2));
			//		KeyMap.insert(XK_KP_F3, KEY_F3));
			//		KeyMap.insert(XK_KP_F4, KEY_F4));
			//		KeyMap.insert(XK_KP_Home, KEY_HOME));
			//		KeyMap.insert(XK_KP_Left, KEY_LEFT));
			//		KeyMap.insert(XK_KP_Up, KEY_UP));
			//		KeyMap.insert(XK_KP_Right, KEY_RIGHT));
			//		KeyMap.insert(XK_KP_Down, KEY_DOWN));
			//		KeyMap.insert(XK_Print, KEY_PRINT));
			//		KeyMap.insert(XK_KP_Prior, KEY_PRIOR));
			//		KeyMap.insert(XK_KP_Page_Up, KEY_PRIOR));
			//		KeyMap.insert(XK_KP_Next, KEY_NEXT));
			//		KeyMap.insert(XK_KP_Page_Down, KEY_NEXT));
			//		KeyMap.insert(XK_KP_End, KEY_END));
			//		KeyMap.insert(XK_KP_Begin, KEY_HOME));
			//		KeyMap.insert(XK_KP_Insert, KEY_INSERT));
			//		KeyMap.insert(XK_KP_Delete, KEY_DELETE));
			//		KeyMap.insert(XK_KP_Equal, 0)); // ???
			//		KeyMap.insert(XK_KP_Multiply, KEY_MULTIPLY));
			//		KeyMap.insert(XK_KP_Add, KEY_ADD));
			//		KeyMap.insert(XK_KP_Separator, KEY_SEPARATOR));
			//		KeyMap.insert(XK_KP_Subtract, KEY_SUBTRACT));
			//		KeyMap.insert(XK_KP_Decimal, KEY_DECIMAL));
			//		KeyMap.insert(XK_KP_Divide, KEY_DIVIDE));
			//		KeyMap.insert(XK_KP_0, KEY_KEY_0));
			//		KeyMap.insert(XK_KP_1, KEY_KEY_1));
			//		KeyMap.insert(XK_KP_2, KEY_KEY_2));
			//		KeyMap.insert(XK_KP_3, KEY_KEY_3));
			//		KeyMap.insert(XK_KP_4, KEY_KEY_4));
			//		KeyMap.insert(XK_KP_5, KEY_KEY_5));
			//		KeyMap.insert(XK_KP_6, KEY_KEY_6));
			//		KeyMap.insert(XK_KP_7, KEY_KEY_7));
			//		KeyMap.insert(XK_KP_8, KEY_KEY_8));
			//		KeyMap.insert(XK_KP_9, KEY_KEY_9));
			//		KeyMap.insert(XK_F1, KEY_F1));
			//		KeyMap.insert(XK_F2, KEY_F2));
			//		KeyMap.insert(XK_F3, KEY_F3));
			//		KeyMap.insert(XK_F4, KEY_F4));
			//		KeyMap.insert(XK_F5, KEY_F5));
			//		KeyMap.insert(XK_F6, KEY_F6));
			//		KeyMap.insert(XK_F7, KEY_F7));
			//		KeyMap.insert(XK_F8, KEY_F8));
			//		KeyMap.insert(XK_F9, KEY_F9));
			//		KeyMap.insert(XK_F10, KEY_F10));
			//		KeyMap.insert(XK_F11, KEY_F11));
			//		KeyMap.insert(XK_F12, KEY_F12));
			//		KeyMap.insert(XK_Shift_L, KEY_LSHIFT));
			//		KeyMap.insert(XK_Shift_R, KEY_RSHIFT));
			//		KeyMap.insert(XK_Control_L, KEY_LCONTROL));
			//		KeyMap.insert(XK_Control_R, KEY_RCONTROL));
			//		KeyMap.insert(XK_Caps_Lock, KEY_CAPITAL));
			//		KeyMap.insert(XK_Shift_Lock, KEY_CAPITAL));
			//		KeyMap.insert(XK_Meta_L, KEY_LWIN));
			//		KeyMap.insert(XK_Meta_R, KEY_RWIN));
			//		KeyMap.insert(XK_Alt_L, KEY_LMENU));
			//		KeyMap.insert(XK_Alt_R, KEY_RMENU));
			//		KeyMap.insert(XK_ISO_Level3_Shift, KEY_RMENU));
			//		KeyMap.insert(XK_Menu, KEY_MENU));
			//		KeyMap.insert(XK_space, KEY_SPACE));
			//		KeyMap.insert(XK_exclam, 0)); //?
			//		KeyMap.insert(XK_quotedbl, 0)); //?
			//		KeyMap.insert(XK_section, 0)); //?
			//		KeyMap.insert(XK_numbersign, 0)); //?
			//		KeyMap.insert(XK_dollar, 0)); //?
			//		KeyMap.insert(XK_percent, 0)); //?
			//		KeyMap.insert(XK_ampersand, 0)); //?
			//		KeyMap.insert(XK_apostrophe, 0)); //?
			//		KeyMap.insert(XK_parenleft, 0)); //?
			//		KeyMap.insert(XK_parenright, 0)); //?
			//		KeyMap.insert(XK_asterisk, 0)); //?
			//		KeyMap.insert(XK_plus, KEY_PLUS)); //?
			//		KeyMap.insert(XK_comma, KEY_COMMA)); //?
			//		KeyMap.insert(XK_minus, KEY_MINUS)); //?
			//		KeyMap.insert(XK_period, KEY_PERIOD)); //?
			//		KeyMap.insert(XK_slash, 0)); //?
			//		KeyMap.insert(XK_0, KEY_KEY_0));
			//		KeyMap.insert(XK_1, KEY_KEY_1));
			//		KeyMap.insert(XK_2, KEY_KEY_2));
			//		KeyMap.insert(XK_3, KEY_KEY_3));
			//		KeyMap.insert(XK_4, KEY_KEY_4));
			//		KeyMap.insert(XK_5, KEY_KEY_5));
			//		KeyMap.insert(XK_6, KEY_KEY_6));
			//		KeyMap.insert(XK_7, KEY_KEY_7));
			//		KeyMap.insert(XK_8, KEY_KEY_8));
			//		KeyMap.insert(XK_9, KEY_KEY_9));
			//		KeyMap.insert(XK_colon, 0)); //?
			//		KeyMap.insert(XK_semicolon, 0)); //?
			//		KeyMap.insert(XK_less, 0)); //?
			//		KeyMap.insert(XK_equal, 0)); //?
			//		KeyMap.insert(XK_greater, 0)); //?
			//		KeyMap.insert(XK_question, 0)); //?
			//		KeyMap.insert(XK_at, 0)); //?
			//		KeyMap.insert(XK_mu, 0)); //?
			//		KeyMap.insert(XK_EuroSign, 0)); //?
			//		KeyMap.insert(XK_A, KEY_KEY_A));
			//		KeyMap.insert(XK_B, KEY_KEY_B));
			//		KeyMap.insert(XK_C, KEY_KEY_C));
			//		KeyMap.insert(XK_D, KEY_KEY_D));
			//		KeyMap.insert(XK_E, KEY_KEY_E));
			//		KeyMap.insert(XK_F, KEY_KEY_F));
			//		KeyMap.insert(XK_G, KEY_KEY_G));
			//		KeyMap.insert(XK_H, KEY_KEY_H));
			//		KeyMap.insert(XK_I, KEY_KEY_I));
			//		KeyMap.insert(XK_J, KEY_KEY_J));
			//		KeyMap.insert(XK_K, KEY_KEY_K));
			//		KeyMap.insert(XK_L, KEY_KEY_L));
			//		KeyMap.insert(XK_M, KEY_KEY_M));
			//		KeyMap.insert(XK_N, KEY_KEY_N));
			//		KeyMap.insert(XK_O, KEY_KEY_O));
			//		KeyMap.insert(XK_P, KEY_KEY_P));
			//		KeyMap.insert(XK_Q, KEY_KEY_Q));
			//		KeyMap.insert(XK_R, KEY_KEY_R));
			//		KeyMap.insert(XK_S, KEY_KEY_S));
			//		KeyMap.insert(XK_T, KEY_KEY_T));
			//		KeyMap.insert(XK_U, KEY_KEY_U));
			//		KeyMap.insert(XK_V, KEY_KEY_V));
			//		KeyMap.insert(XK_W, KEY_KEY_W));
			//		KeyMap.insert(XK_X, KEY_KEY_X));
			//		KeyMap.insert(XK_Y, KEY_KEY_Y));
			//		KeyMap.insert(XK_Z, KEY_KEY_Z));
			//		KeyMap.insert(XK_Adiaeresis, 0)); //?
			//		KeyMap.insert(XK_Odiaeresis, 0)); //?
			//		KeyMap.insert(XK_Udiaeresis, 0)); //?
			//		KeyMap.insert(XK_bracketleft, 0)); //?
			//		KeyMap.insert(XK_backslash, 0)); //?
			//		KeyMap.insert(XK_bracketright, 0)); //?
			//		KeyMap.insert(XK_asciicircum, 0)); //?
			//		KeyMap.insert(XK_degree, 0)); //?
			//		KeyMap.insert(XK_underscore, 0)); //?
			//		KeyMap.insert(XK_grave, 0)); //?
			//		KeyMap.insert(XK_acute, 0)); //?
			//		KeyMap.insert(XK_quoteleft, 0)); //?
			//		KeyMap.insert(XK_a, KEY_KEY_A));
			//		KeyMap.insert(XK_b, KEY_KEY_B));
			//		KeyMap.insert(XK_c, KEY_KEY_C));
			//		KeyMap.insert(XK_d, KEY_KEY_D));
			//		KeyMap.insert(XK_e, KEY_KEY_E));
			//		KeyMap.insert(XK_f, KEY_KEY_F));
			//		KeyMap.insert(XK_g, KEY_KEY_G));
			//		KeyMap.insert(XK_h, KEY_KEY_H));
			//		KeyMap.insert(XK_i, KEY_KEY_I));
			//		KeyMap.insert(XK_j, KEY_KEY_J));
			//		KeyMap.insert(XK_k, KEY_KEY_K));
			//		KeyMap.insert(XK_l, KEY_KEY_L));
			//		KeyMap.insert(XK_m, KEY_KEY_M));
			//		KeyMap.insert(XK_n, KEY_KEY_N));
			//		KeyMap.insert(XK_o, KEY_KEY_O));
			//		KeyMap.insert(XK_p, KEY_KEY_P));
			//		KeyMap.insert(XK_q, KEY_KEY_Q));
			//		KeyMap.insert(XK_r, KEY_KEY_R));
			//		KeyMap.insert(XK_s, KEY_KEY_S));
			//		KeyMap.insert(XK_t, KEY_KEY_T));
			//		KeyMap.insert(XK_u, KEY_KEY_U));
			//		KeyMap.insert(XK_v, KEY_KEY_V));
			//		KeyMap.insert(XK_w, KEY_KEY_W));
			//		KeyMap.insert(XK_x, KEY_KEY_X));
			//		KeyMap.insert(XK_y, KEY_KEY_Y));
			//		KeyMap.insert(XK_z, KEY_KEY_Z));
			//		KeyMap.insert(XK_ssharp, 0)); //?
			//		KeyMap.insert(XK_adiaeresis, 0)); //?
			//		KeyMap.insert(XK_odiaeresis, 0)); //?
			//		KeyMap.insert(XK_udiaeresis, 0)); //?
			//
			//		KeyMap.sort();

		}

		//Platform dependent
		void CUserEventHandlerLinux::initCursorsInfo()
		{
			CursorsInfo.insert(0, new SCursorInfo(0, ECS_RELEASED));
		}

		//! This func must call from player when any key event from user detected.
		//! Platform dependent.
		void CUserEventHandlerLinux::handleKeyEvent(void* e)
		{
			IUserEvent* userEvent = 0;

			XEvent* event = static_cast<XEvent*>(e);

			switch (event->type)
			{
				// fall-through in case the release should be handled
				case KeyPress:
				{
//					SKeyMap mp;
//					char buf[8] =
//					{ 0 };
//
//					XLookupString(&event.xkey, buf, sizeof(buf), &mp.X11Key,
//							NULL);
//
//					const s32 idx = KeyMap.binary_search(mp);
//
//					if (idx != -1)
//						irrevent.KeyInput.Key =
//								(EKEY_CODE) KeyMap[idx].Win32Key;
//					else
//					{
//						irrevent.KeyInput.Key = (EKEY_CODE) 0;
//						os::Printer::log(
//								"Could not find win32 key for x11 key.",
//								core::stringc((int) mp.X11Key).c_str(),
//								ELL_WARNING);
//					}
//					irrevent.EventType = irr::EET_KEY_INPUT_EVENT;
//					irrevent.KeyInput.PressedDown = (event.type == KeyPress);
//					//					mbtowc(&irrevent.KeyInput.Char, buf, sizeof(buf));
//					irrevent.KeyInput.Char = ((wchar_t*) (buf))[0];
//					irrevent.KeyInput.Control = (event.xkey.state & ControlMask)
//							!= 0;
//					irrevent.KeyInput.Shift = (event.xkey.state & ShiftMask)
//							!= 0;
//					postEventFromUser (irrevent);

					break;
				}

				case KeyRelease:
				{
					//				if (0 == AutorepeatSupport && (XPending(display) > 0))
					//				{
					//					// check for Autorepeat manually
					//					// We'll do the same as Windows does: Only send KeyPressed
					//					// So every KeyRelease is a real release
					//					XEvent nextEvent;
					//					XPeekEvent(event.xkey.display, &nextEvent);
					//
					//					if ((nextEvent.type == KeyPress)
					//							&& (nextEvent.xkey.keycode == event.xkey.keycode)
					//							&& (nextEvent.xkey.time - event.xkey.time) < 2)	// usually same time, but on some systems a difference of 1 is possible
					//					{
					//						/* Ignore the key release event */
					//						break;
					//					}
					//				}
					break;
				}

				default:
				{
					//Not implemented
					IRR_ASSERT(false);
					break;
				}
			}

			this->onEvent(userEvent);
		}

		//! This func must call from player when any mouse event from user detected.
		//! Platform dependent
		void CUserEventHandlerLinux::handleMouseEvent(void* e)
		{
			IUserEvent* userEvent = 0;

			XEvent* event = static_cast<XEvent*>(e);

			switch (event->type)
			{
				case MotionNotify:
				{
//					irrevent.EventType = irr::EET_MOUSE_INPUT_EVENT;
//					irrevent.MouseInput.Event = irr::EMIE_MOUSE_MOVED;
//					irrevent.MouseInput.X = event.xbutton.x;
//					irrevent.MouseInput.Y = event.xbutton.y;
//					irrevent.MouseInput.Control = (event.xkey.state
//							& ControlMask) != 0;
//					irrevent.MouseInput.Shift = (event.xkey.state & ShiftMask)
//							!= 0;
//
//					// mouse button states
//					irrevent.MouseInput.ButtonStates =
//							(event.xbutton.state & Button1Mask) ?
//									irr::EMBSM_LEFT : 0;
//					irrevent.MouseInput.ButtonStates |=
//							(event.xbutton.state & Button3Mask) ?
//									irr::EMBSM_RIGHT : 0;
//					irrevent.MouseInput.ButtonStates |=
//							(event.xbutton.state & Button2Mask) ?
//									irr::EMBSM_MIDDLE : 0;
//
//					postEventFromUser (irrevent);

					break;
				}

				case ButtonPress:
				case ButtonRelease:
				{
//
//					irrevent.EventType = irr::EET_MOUSE_INPUT_EVENT;
//					irrevent.MouseInput.X = event.xbutton.x;
//					irrevent.MouseInput.Y = event.xbutton.y;
//					irrevent.MouseInput.Control = (event.xkey.state
//							& ControlMask) != 0;
//					irrevent.MouseInput.Shift = (event.xkey.state & ShiftMask)
//							!= 0;
//
//					// mouse button states
//					// This sets the state which the buttons had _prior_ to the event.
//					// So unlike on Windows the button which just got changed has still the old state here.
//					// We handle that below by flipping the corresponding bit later.
//					irrevent.MouseInput.ButtonStates =
//							(event.xbutton.state & Button1Mask) ?
//									irr::EMBSM_LEFT : 0;
//					irrevent.MouseInput.ButtonStates |=
//							(event.xbutton.state & Button3Mask) ?
//									irr::EMBSM_RIGHT : 0;
//					irrevent.MouseInput.ButtonStates |=
//							(event.xbutton.state & Button2Mask) ?
//									irr::EMBSM_MIDDLE : 0;
//
//					irrevent.MouseInput.Event = irr::EMIE_COUNT;
//
//					switch (event.xbutton.button)
//					{
//						case Button1:
//							irrevent.MouseInput.Event =
//									(event.type == ButtonPress) ?
//											irr::EMIE_LMOUSE_PRESSED_DOWN :
//											irr::EMIE_LMOUSE_LEFT_UP;
//							irrevent.MouseInput.ButtonStates ^= irr::EMBSM_LEFT;
//							break;
//
//						case Button3:
//							irrevent.MouseInput.Event =
//									(event.type == ButtonPress) ?
//											irr::EMIE_RMOUSE_PRESSED_DOWN :
//											irr::EMIE_RMOUSE_LEFT_UP;
//							irrevent.MouseInput.ButtonStates ^=
//									irr::EMBSM_RIGHT;
//							break;
//
//						case Button2:
//							irrevent.MouseInput.Event =
//									(event.type == ButtonPress) ?
//											irr::EMIE_MMOUSE_PRESSED_DOWN :
//											irr::EMIE_MMOUSE_LEFT_UP;
//							irrevent.MouseInput.ButtonStates ^=
//									irr::EMBSM_MIDDLE;
//							break;
//
//						case Button4:
//							if (event.type == ButtonPress)
//							{
//								irrevent.MouseInput.Event = EMIE_MOUSE_WHEEL;
//								irrevent.MouseInput.Wheel = 1.0f;
//							}
//							break;
//
//						case Button5:
//							if (event.type == ButtonPress)
//							{
//								irrevent.MouseInput.Event = EMIE_MOUSE_WHEEL;
//								irrevent.MouseInput.Wheel = -1.0f;
//							}
//							break;
//					}
//
//					if (irrevent.MouseInput.Event != irr::EMIE_COUNT)
//					{
//						postEventFromUser (irrevent);
//
//						if (irrevent.MouseInput.Event
//								>= EMIE_LMOUSE_PRESSED_DOWN
//								&& irrevent.MouseInput.Event
//										<= EMIE_MMOUSE_PRESSED_DOWN)
//						{
//							u32 clicks = checkSuccessiveClicks(
//									irrevent.MouseInput.X,
//									irrevent.MouseInput.Y,
//									irrevent.MouseInput.Event);
//							if (clicks == 2)
//							{
//								irrevent.MouseInput.Event =
//										(EMOUSE_INPUT_EVENT)(
//												EMIE_LMOUSE_DOUBLE_CLICK
//														+ irrevent.MouseInput.Event
//														- EMIE_LMOUSE_PRESSED_DOWN);
//								postEventFromUser(irrevent);
//							}
//							else if (clicks == 3)
//							{
//								irrevent.MouseInput.Event =
//										(EMOUSE_INPUT_EVENT)(
//												EMIE_LMOUSE_TRIPLE_CLICK
//														+ irrevent.MouseInput.Event
//														- EMIE_LMOUSE_PRESSED_DOWN);
//								postEventFromUser(irrevent);
//							}
//						}
//					}

					break;
				}

				default:
				{
					//Not implemented
					IRR_ASSERT(false);
					break;
				}
			}

			this->onEvent(userEvent);
		}

		//! Internal function. Please do not use.
		IUserEventHandler * createUserEventsHandler()
		{
			return new CUserEventHandlerLinux;
		}

	}  // namespace events

}  // namespace irrgame

#endif /* TARGET_OS_LINUX */

