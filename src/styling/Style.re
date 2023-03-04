module Size = {
  type t = 
  | XSmall
  | Small
  | Medium
  | Large
  | XLarge
  | XXLarge
  | XXXLarge;

  let toPoint = fun
  | XSmall => 12.0
  | Small => 16.0
  | Medium => 20.0
  | Large => 24.0
  | XLarge => 36.0
  | XXLarge => 48.0
  | XXXLarge => 56.0;
}

module Color = {
  module RawValue = {
    type t = 
    |Current
    |Hex(string)
    | Transparent;
  };
  module Intensity = {
    type t = 
    | Darkest
    | Dark
    | Medium
    | Light
    | Lightest;
  };

  type t =
  | Black
}
module Icons = {

  // let sizeToRem = Size.toPoint >> 
  module Logo = {
    module BusinessDark = {

    }
  }
}