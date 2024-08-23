module AccessibilityRole = {
  type t = string;

  let adjustable = "adjustable";
  let alert = "alert";
  let button = "button";
  let checkbox = "checkbox";
  let combobox = "combobox";
  let header = "header";
  let image = "image";
  let imagebutton = "imagebutton";
  let keyboardkey = "keyboardkey";
  let link = "link";
  let menu = "menu";
  let menubar = "menubar";
  let menuitem = "menuitem";
  let none = "none";
  let progressbar = "progressbar";
  let radio = "radio";
  let radiogroup = "radiogroup";
  let scrollbar = "scrollbar";
  let search = "search";
  let spinbutton = "spinbutton";
  let summary = "summary";
  let switch_ = "switch";
  let tab = "tab";
  let tablist = "tablist";
  let text = "text";
  let timer = "timer";
  let togglebutton = "togglebutton";
  let toolbar = "toolbar";
  let grid = "grid";
};

module Action = {
  [@deriving jsProperties]
  type t = {
    name: string,
    label: string,
  };
};

module Checked = {
  type t('a) = 'a;
  [@mel.inline]
  let checked = true;
  [@mel.inline]
  let unchecked = false;
  [@mel.inline]
  let mixed = "mixed";
};

module Role = {
  type t = string;
  let alert = "alert";
  let button = "button";
  let checkbox = "checkbox";
  let combobox = "combobox";
  let grid = "grid";
  let heading = "heading";
  let img = "img";
  let link = "link";
  let list = "list";
  let menu = "menu";
  let menubar = "menubar";
  let menuitem = "menuitem";
  let none = "none";
  let presentation = "presentation";
  let progressbar = "progressbar";
  let radio = "radio";
  let radiogroup = "radiogroup";
  let scrollbar = "scrollbar";
  let searchbox = "searchbox";
  let slider = "slider";
  let spinbutton = "spinbutton";
  let summary = "summary";
  let switch_ = "switch";
  let tab = "tab";
  let tablist = "tablist";
  let timer = "timer";
  let toolbar = "toolbar";
};

module State = {
  type t;
  [@mel.obj]
  external t:
    (
      ~disabled: bool=?,
      ~selected: bool=?,
      ~checked: Checked.t('a)=?,
      ~busy: bool=?,
      ~expanded: bool=?,
      unit
    ) =>
    t;
};

module Value = {
  [@deriving jsProperties]
  type t = {
    [@mel.optional]
    min: option(int),
    [@mel.optional]
    max: option(int),
    [@mel.optional]
    now: option(int),
    [@mel.optional]
    text: option(string),
  };
};
