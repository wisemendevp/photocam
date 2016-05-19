#import <UIKit/UIKit.h>

// We can't import the CustomCamera class because it would make a circular reference, so "fake" the existence of the class like this:
@class ownioscam;

@interface ownioscamController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
//{

//IBOutlet UIImageView *ImageView;
//}

// Action method
-(IBAction) takePhotoButtonPressed:(id)sender forEvent:(UIEvent*)event;

// Action method
-(IBAction) cancel:(id)sender forEvent:(UIEvent*)event;

@property (strong, nonatomic) IBOutlet UIImageView *ImageView;

@property (strong, nonatomic) IBOutlet UIImageView *flashview;

// Declare some properties (to be explained soon)
@property (strong, nonatomic) ownioscam* plugin;
@property (strong, nonatomic) UIImagePickerController* picker;

@property (strong, nonatomic) IBOutlet UIBarButtonItem *flashprop;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *Autoprop;

@property (strong, nonatomic) IBOutlet UIBarButtonItem *onprop;

@property (strong, nonatomic) IBOutlet UIBarButtonItem *offprop;
- (IBAction)flashhit:(id)sender;

- (IBAction)Autohit:(id)sender;
- (IBAction)onhit:(id)sender;

- (IBAction)offhitt:(id)sender;
@property (strong, nonatomic) IBOutlet UIToolbar *Toolbaar;

@end