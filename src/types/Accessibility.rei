type state;
type actionInfo;
type checked('a);

[@mel.inline true]
let checked: checked(bool);

[@mel.inline false]
let unchecked: checked(bool);

[@mel.inline "mixed"]
let mixed: checked(string);

[@mel.obj]
external actionInfo: (~name: string, ~label: string=?, unit) => actionInfo;

type actionEvent = AccessibilityActionEvent.t;

[@mel.obj]
external state:
  (
    ~disabled: bool=?,
    ~selected: bool=?,
    ~checked: checked('a)=?,
    ~busy: bool=?,
    ~expanded: bool=?,
    unit
  ) =>
  state;

type value;

[@mel.obj] external textValue: (~text: string) => value;

[@mel.obj] external intValue: (~min: int, ~max: int, ~now: int) => value;

type liveRegion = [ | `none | `polite | `assertive];

// `accessibilityRole` communicates the purpose of a component to the user of an assistive technology.
// roles that are specific for react-native-web are also included:
// article, banner, complementary, contentinfo, form, list, listItem, main, navigation, region
type role = [
  | `adjustable
  | `alert
  | `article
  | `banner
  | `button
  | `checkbox
  | `combobox
  | `complementary
  | `contentinfo
  | `form
  | `header
  | `image
  | `imagebutton
  | `keyboardkey
  | `link
  | `list
  | `listitem
  | `main
  | `menu
  | `menubar
  | `menuitem
  | `navigation
  | `none
  | `progressbar
  | `radio
  | `radiogroup
  | `region
  | `scrollbar
  | `search
  | `spinbutton
  | `summary
  | `tab
  | `tablist
  | `text
  | `timer
  | `toolbar
];
