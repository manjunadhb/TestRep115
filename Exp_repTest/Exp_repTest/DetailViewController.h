//
//  DetailViewController.h
//  Exp_repTest
//
//  Created by Manjunadh Bommisetty on 09/09/17.
//  Copyright © 2017 BRN. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

